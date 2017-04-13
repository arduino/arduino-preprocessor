/*
 * This file is part of arduino-preprocessor.
 *
 * Copyright 2017 BCMI LABS SA
 *
 * arduino-preprocessor is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * As a special exception, you may use this file as part of a free software
 * library without restriction.  Specifically, if other files instantiate
 * templates or use macros or inline functions from this file, or you compile
 * this file and link it with other files to produce an executable, this
 * file does not by itself cause the resulting executable to be covered by
 * the GNU General Public License.  This exception does not however
 * invalidate any other reasons why the executable file might be covered by
 * the GNU General Public License.
 */

#include <clang/AST/AST.h>
#include <clang/AST/ASTConsumer.h>
#include <clang/AST/ASTContext.h>
#include <clang/AST/RecursiveASTVisitor.h>
#include <clang/ASTMatchers/ASTMatchFinder.h>
#include <clang/ASTMatchers/ASTMatchers.h>
#include <clang/Driver/Options.h>
#include <clang/Frontend/ASTConsumers.h>
#include <clang/Frontend/CompilerInstance.h>
#include <clang/Frontend/FrontendActions.h>
#include <clang/Rewrite/Core/Rewriter.h>
#include <clang/Tooling/CommonOptionsParser.h>
#include <clang/Tooling/Tooling.h>

#include <iostream>
#include <sstream>
#include <list>

#include "Config.h"
#include "CommandLine.h"

using namespace clang;
using namespace clang::ast_matchers;
using namespace clang::tooling;
using namespace llvm;
using namespace std;

typedef struct {
    FullSourceLoc location;
    string identifier;
} IdentifierLocation;

class IdentifiersList : public list<IdentifierLocation *> {
public:

    void dump() {
        outs() << "Undeclared identifiers:\n";
        for (IdentifierLocation *m : * this) {
            const FullSourceLoc &sl = m->location.getSpellingLoc();
            outs() << "  " << sl.getSpellingLineNumber() << ":" << sl.getSpellingColumnNumber();
            outs() << " " << m->identifier << "\n";
        }
    }

    IdentifierLocation *findFirst(string name) {
        for (IdentifierLocation *m : * this) {
            if (m->identifier == name)
                return m;
        }
        return nullptr;
    }
};

IdentifiersList undeclaredIdentifiers;

class UndefinedIdentifiersCollector : public DiagnosticConsumer {

    void HandleDiagnostic(DiagnosticsEngine::Level level, const Diagnostic& info) override {
        // DiagnosticConsumer::HandleDiagnostic(level, info);

        if (level == DiagnosticsEngine::Level::Error) {
            const SourceManager &sm = info.getSourceManager();
            const SourceLocation &loc = info.getLocation();
            const SourceLocation &sl = sm.getSpellingLoc(loc);
            if (debugOutput) {
                outs() << sm.getSpellingLineNumber(sl) << ":" << sm.getSpellingColumnNumber(sl) << " ";
            }

            unsigned id = info.getID();
            if (id == 3441 /* use of undeclared identifier */) {
                // It seems that the only way to retrieve the undeclared symbol
                // is to print it as a localization string.
                const char *fmt = "%0";
                SmallString<100> outArg;
                info.FormatDiagnostic(fmt, fmt + 2, outArg);
                // we should also remove quotes as well...
                StringRef identifier = outArg.substr(1, outArg.size() - 2);
                if (debugOutput) {
                    outs() << "Found undeclared identifier '" << identifier << "'\n";
                }

                // Save the identifier position for later processing
                IdentifierLocation *m = new IdentifierLocation;
                m->location = FullSourceLoc(loc, sm);
                m->identifier = identifier.str();
                undeclaredIdentifiers.push_front(m);
                return;
            }

            if (debugOutput) {
                SmallString<100> outStr;
                info.FormatDiagnostic(outStr);
                outs() << "(" << id << ") " << outStr << "\n";
            }
        }
    }
};

Rewriter rewriter;

class INOPreprocessorMatcherCallback : public MatchFinder::MatchCallback {
    bool insertionPointFound = false;
    bool firstLineInserted = false;
    FullSourceLoc insertionPoint;
    PresumedLoc presumedInsertionPoint;

    DeclarationMatcher funcMatcher = functionDecl(isDefinition()).bind("function_decl");
    DeclarationMatcher varMatcher = varDecl().bind("var_decl");
    //StatementMatcher funcCallMatcher = callExpr().bind("function_call");
public:

    void attachTo(MatchFinder &finder) {
        finder.addMatcher(funcMatcher, this);
        finder.addMatcher(varMatcher, this);
        //finder.addMatcher(funcCallMatcher, &funcDeclaredCB);
    }

    void run(const MatchFinder::MatchResult &match) override {
        ASTContext *ctx = match.Context;
        SourceManager *sm = &ctx->getSourceManager();

        const FunctionDecl *f = match.Nodes.getNodeAs<FunctionDecl>("function_decl");
        if (f) {
            FullSourceLoc loc = ctx->getFullLoc(f->getLocStart());
            SourceRange r = f->getSourceRange();
            FullSourceLoc begin = ctx->getFullLoc(r.getBegin());
            FullSourceLoc end = ctx->getFullLoc(r.getEnd());

            if (debugOutput) {
                outs() << "Function " << f->getName() << " declared at ";
                outs() << loc.getSpellingLineNumber() << ":" << loc.getSpellingColumnNumber();
                outs() << " (range " << begin.getSpellingLineNumber() << ":" << begin.getSpellingColumnNumber();
                outs() << " to " << end.getSpellingLineNumber() << ":" << end.getSpellingColumnNumber() << ")\n";
            }

            if (f->getParentFunctionOrMethod()) {
                if (debugOutput) {
                    outs() << "  Function is not top level, ignoring.\n";
                }
                return;
            }

            if (!insertionPointFound) {
                insertionPointFound = true;
                insertionPoint = begin;
                presumedInsertionPoint = sm->getPresumedLoc(begin, true);
                if (debugOutput) {
                    outs() << "  !! Insertion point set to ";
                    outs() << begin.getSpellingLineNumber() << ":" << begin.getSpellingColumnNumber() << "\n";
                }
            }

            if (outputOnlyNeededPrototypes) {
                // Check if this function is called and needs a forward declaration
                IdentifierLocation *und = undeclaredIdentifiers.findFirst(f->getName());
                if (!und) {
                    if (debugOutput) {
                        outs() << "  This function is not forward-called and do not need a prototype.\n";
                    }
                    return;
                }
            }

            // Extract line pragma for prototype insertion
            writeLineInfo(sm->getPresumedLoc(loc, true));

            // Extract prototype from function using the pretty printer
            // and stopping at the first open curly brace "{"
            string proto;
            raw_string_ostream o(proto);
            f->print(o);
            o.flush();
            proto = proto.substr(0, proto.find_first_of('{') - 1) + ";\n";
            rewriter.InsertTextAfter(insertionPoint, proto);
            firstLineInserted = true;
            if (debugOutput) {
                outs() << "  Generated prototype: " << proto;
            }
        }

        const VarDecl *v = match.Nodes.getNodeAs<VarDecl>("var_decl");
        if (v) {
            auto loc = ctx->getFullLoc(v->getLocStart());
            if (debugOutput) {
                outs() << "Variable " << v->getName() << " declared at ";
                outs() << loc.getSpellingLineNumber() << ":" << loc.getSpellingColumnNumber() << "\n";
            }
            if (v->getParentFunctionOrMethod()) {
                if (debugOutput) {
                    outs() << "  Variable is not top level, ignoring.\n";
                }
                return;
            }
        }
    }

    void onEndOfTranslationUnit() override {
        if (firstLineInserted) {
            writeLineInfo(presumedInsertionPoint);
        }
    }

    void writeLineInfo(const PresumedLoc &presumed) {
        ostringstream lineInfo;
        lineInfo << "#line " << presumed.getLine();
        lineInfo << " \"" << presumed.getFilename() << "\"\n";
        rewriter.InsertTextAfter(insertionPoint, lineInfo.str());
    }
};

class INOPreprocessAction : public ASTFrontendAction {
    MatchFinder finder;
    INOPreprocessorMatcherCallback funcDeclaredCB;

public:

    INOPreprocessAction() {
        funcDeclaredCB.attachTo(finder);
    }

    unique_ptr<ASTConsumer> CreateASTConsumer(CompilerInstance &compiler, StringRef inFile) override {
        rewriter.setSourceMgr(compiler.getSourceManager(), compiler.getLangOpts());
        return finder.newASTConsumer();
    }

    virtual void EndSourceFileAction() override {
        if (debugOutput) {
            undeclaredIdentifiers.dump();
        }

        const FileID mainFileID = rewriter.getSourceMgr().getMainFileID();
        const RewriteBuffer *buf = rewriter.getRewriteBufferFor(mainFileID);
        if (buf == nullptr) {
            outs() << "No changes needed!\n";
        } else {
            outs() << string(buf->begin(), buf->end());
        }
    }
};

int main(int argc, const char **argv) {
    CommonOptionsParser optParser = doCommandLineParsing(argc, argv);
    ClangTool tool(optParser.getCompilations(), optParser.getSourcePathList());

    UndefinedIdentifiersCollector dc;
    tool.setDiagnosticConsumer(&dc);

    int res = tool.run(newFrontendActionFactory<INOPreprocessAction>().get());
    return res;
}
