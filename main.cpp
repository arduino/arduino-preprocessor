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

#include "ArduinoDiagnosticConsumer.hpp"
#include "CommandLine.hpp"
#include "Config.hpp"
#include "CodeCompletion.hpp"
#include "IdentifiersList.hpp"
#include "utils.hpp"

using namespace clang;
using namespace clang::ast_matchers;
using namespace clang::tooling;
using namespace llvm;
using namespace std;

IdentifiersList undeclaredIdentifiers;

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
        SourceManager &sm = ctx->getSourceManager();

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

            if (dyn_cast<CXXMethodDecl>(f)) {
                if (debugOutput) {
                    outs() << "  Ignored CXX method declaration.\n";
                }
                return;
            }

            if (f->getParentFunctionOrMethod()) {
                if (debugOutput) {
                    outs() << "  Function is not top level, ignoring.\n";
                }
                return;
            }

            detectInsertionPoint(sm, begin, end);
            if (!insertionPointFound) {
                return;
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
            writeLineInfo(sm.getPresumedLoc(loc, true));

            // Extract prototype from function using the pretty printer
            // and stopping at the first open curly brace "{"
            if (f->isExternC()) {
                rewriter.InsertTextAfter(insertionPoint, "extern \"C\" ");
            }
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
            if (v->getParentFunctionOrMethod()) {
                //if (debugOutput) {
                //    outs() << "  Variable is not top level, ignoring.\n";
                //}
                return;
            }

            FullSourceLoc loc = ctx->getFullLoc(v->getLocStart());
            SourceRange r = v->getSourceRange();
            FullSourceLoc begin = ctx->getFullLoc(r.getBegin());
            FullSourceLoc end = ctx->getFullLoc(r.getEnd());

            if (debugOutput) {
                outs() << "Variable " << v->getName() << " declared at ";
                outs() << loc.getSpellingLineNumber() << ":" << loc.getSpellingColumnNumber();
                outs() << " (range " << begin.getSpellingLineNumber() << ":" << begin.getSpellingColumnNumber();
                outs() << " to " << end.getSpellingLineNumber() << ":" << end.getSpellingColumnNumber() << ")\n";
            }

            detectInsertionPoint(sm, begin, end);
        }
    }

    void detectInsertionPoint(SourceManager &sm, FullSourceLoc &begin, FullSourceLoc &end) {
        if (insertionPointFound) {
            return;
        }

        if (undeclaredIdentifiers.empty()) {
            //insertionPoint = begin;
            //insertionPointFound = true;
            //if (debugOutput) {
            //    outs() << "  !! Insertion point found (using the first available position)\n";
            //}
            return;
        }

        FullSourceLoc first = undeclaredIdentifiers.back()->location;
        if (first.isBeforeInTranslationUnitThan(begin)) {
            if (debugOutput) {
                outs() << "  !! Insertion point found!\n";
            }
            insertionPointFound = true;
            return;
        }

        if (end.isInvalid()) {
            return;
        }

        insertionPoint = begin;
        presumedInsertionPoint = sm.getPresumedLoc(begin, true);
        if (debugOutput) {
            outs() << "  Insertion point pushed to ";
            outs() << begin.getSpellingLineNumber() << ":" << begin.getSpellingColumnNumber() << "\n";
        }

        if (first.isBeforeInTranslationUnitThan(end)) {
            if (debugOutput) {
                outs() << "  !! Insertion point found!\n";
            }
            insertionPointFound = true;
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

static string preprocessedSketch;

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
            ostringstream out;
            undeclaredIdentifiers.dump(out);
            out.flush();
            outs() << out.str();
        }

        const FileID mainFileID = rewriter.getSourceMgr().getMainFileID();
        const RewriteBuffer *buf = rewriter.getRewriteBufferFor(mainFileID);
        if (buf == nullptr) {
            // No changes needed, output the source file as-is
            auto buff = rewriter.getSourceMgr().getBuffer(mainFileID);
            preprocessedSketch = buff->getBuffer().str();
        } else {
            preprocessedSketch = string(buf->begin(), buf->end());
        }
    }
};

int main(int argc, const char **argv) {
    CommonOptionsParser optParser = doCommandLineParsing(argc, argv);
    ClangTool tool(optParser.getCompilations(), optParser.getSourcePathList());

    ArduinoDiagnosticConsumer dc;
    dc.collectUndeclaredIdentifiersIn(undeclaredIdentifiers);
    if (outputDiagnostics) {
        dc.outputJsonDiagnosticsTo(cout);
    }
    tool.setDiagnosticConsumer(&dc);

    int res = tool.run(newFrontendActionFactory<INOPreprocessAction>().get());

    if (outputPreprocessedSketch) {
        cout << preprocessedSketch;
    }

    if (outputCodeCompletions) {
        int line = FindRealLineForCodeCompletion(preprocessedSketch, codeCompleteFilename, codeCompleteLine);
        if (line != -1) {
            DoCodeCompletion(optParser.getSourcePathList()[0], preprocessedSketch, line, codeCompleteCol);
        }
    }

    return res;
}
