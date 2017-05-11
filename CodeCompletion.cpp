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

#include <clang/Basic/TargetInfo.h>
#include <clang/Frontend/CompilerInstance.h>
#include <clang/Frontend/FrontendOptions.h>
#include <clang/Frontend/FrontendActions.h>
#include <clang/Lex/Preprocessor.h>
#include <clang/Lex/PreprocessorOptions.h>
#include <clang/Sema/Sema.h>
#include <clang/Sema/CodeCompleteOptions.h>
#include <clang/Sema/CodeCompleteConsumer.h>

#include <iostream>

#include "CommandLine.hpp"
#include "utils.hpp"

using namespace clang;
using namespace llvm;
using namespace std;

class CustomCodeCompleteConsumer : public CodeCompleteConsumer {
    CodeCompletionTUInfo TUInfo;

public:

    CustomCodeCompleteConsumer(const CodeCompleteOptions &opts) : CodeCompleteConsumer(opts, false),
    TUInfo(std::make_shared<GlobalCodeCompletionAllocator>()) {
    }

    void ProcessCodeCompleteResults(Sema &s, CodeCompletionContext ctx, CodeCompletionResult *res, unsigned n) override {

    }

    /*
    void ProcessOverloadCandidates(Sema &s, unsigned currArg, OverloadCandidate *candidates, unsigned n) {
    }
     */

    virtual CodeCompletionAllocator &getAllocator() override {
        return TUInfo.getAllocator();
    }

    virtual CodeCompletionTUInfo &getCodeCompletionTUInfo() override {
        return TUInfo;
    }
};

int FindRealLineForCodeCompletion(string &code, string &filename, int line) {
    int curr = 0;
    int real = 0;
    bool inFile = false;
    for (string &l : split(code, '\n')) {
        real++;
        curr++;
        if (startsWith(l, "# ") || startsWith(l, "#line ")) {
            vector<string> fields = split(l, ' ');
            int marker;
            if (stringToInt(fields[1], &marker)) {
                curr = marker;
            }
            if (fields[2].find(filename) != string::npos) {
                inFile = true;
            } else {
                inFile = false;
            }
        }

        if (inFile && curr == line) {
            if (debugOutput) {
                cerr << "Code-completions at line " << real << "\n";
            }
            return real;
        }
    }

    // Not found... fallback to input line
    if (debugOutput) {
        cerr << "Sorry! source code line not found...\n";
    }
    return -1;
}

void DoCodeCompletion(const string &filename, const string &code, int line, int col) {
    CompilerInstance ci;
    ci.createDiagnostics();

    // Hide diagnostics
    ci.getDiagnostics().setClient(new IgnoringDiagConsumer());

    shared_ptr<clang::TargetOptions> tOpts = make_shared<clang::TargetOptions>();
    tOpts->Triple = sys::getDefaultTargetTriple();
    ci.setTarget(TargetInfo::CreateTargetInfo(ci.getDiagnostics(), tOpts));

    LangOptions &lOpts = ci.getLangOpts();
    lOpts.CPlusPlus = true;
    lOpts.CPlusPlus11 = true;
    lOpts.Bool = true;
    lOpts.GNUMode = true;

    CodeCompleteOptions ccOpts;
    ccOpts.IncludeMacros = 1;
    ccOpts.IncludeCodePatterns = 1;
    ccOpts.IncludeGlobals = 1;
    ccOpts.IncludeBriefComments = 1;
    ci.setCodeCompletionConsumer(new CustomCodeCompleteConsumer(ccOpts));

    FrontendOptions& fOpts = ci.getFrontendOpts();
    fOpts.Inputs.push_back(FrontendInputFile(filename, InputKind::IK_CXX));
    fOpts.CodeCompletionAt.FileName = filename;
    fOpts.CodeCompletionAt.Line = line;
    fOpts.CodeCompletionAt.Column = col;

    unique_ptr<MemoryBuffer> buff(MemoryBuffer::getMemBuffer(code, filename));

    PreprocessorOptions& pOpts = ci.getPreprocessorOpts();
    pOpts.clearRemappedFiles();
    pOpts.addRemappedFile(filename, buff.release());

    SyntaxOnlyAction action;
    if (action.BeginSourceFile(ci, ci.getFrontendOpts().Inputs[0])) {
        action.Execute();
        action.EndSourceFile();
    }
}