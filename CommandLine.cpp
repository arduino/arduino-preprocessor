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

#include "CommandLine.hpp"
#include "Config.hpp"
#include "utils.hpp"

#include <iostream>
#include <sstream>

bool debugOutput;
bool outputDiagnostics;
bool outputOnlyNeededPrototypes;
bool outputPreprocessedSketch = true;

// Code completion parameters
bool outputCodeCompletions;
string codeCompleteFilename;
int codeCompleteLine;
int codeCompleteCol;

static cl::OptionCategory arduinoToolCategory("Arduino options");
// TODO: add complete help
static cl::extrahelp arduinoHelp("\n"
        "arduino-preprocessor is a command-line utility based on LLVM and clang tooling.\n"
        "\n"
        );
static cl::extrahelp commonHelp(CommonOptionsParser::HelpMessage);
static cl::opt<bool> debugOutputOpt("debug");
static cl::opt<bool> outputOnlyNeededPrototypesOpt("output-only-needed-prototypes");
static cl::opt<bool> outputDiagnosticsOpt("output-diagnostics");
static cl::opt<string> outputCodeCompletionsOpt("output-code-completions");

static void printVersion() {
    cout << "Arduino (https://www.arduino.cc/):\n";
    cout << "  arduino-preprocessor version " VERSION "\n";
}

CommonOptionsParser doCommandLineParsing(int argc, const char **argv) {
    debugOutputOpt.setCategory(arduinoToolCategory);
    debugOutputOpt.setInitialValue(false);
    debugOutputOpt.setDescription("Print debugging messages from Arduino preprocessor");

    outputOnlyNeededPrototypesOpt.setCategory(arduinoToolCategory);
    outputOnlyNeededPrototypesOpt.setInitialValue(false);
    outputOnlyNeededPrototypesOpt.setDescription("Output a prototype only if a forward declaration is needed (experimental)");

    outputDiagnosticsOpt.setCategory(arduinoToolCategory);
    outputDiagnosticsOpt.setInitialValue(false);
    outputDiagnosticsOpt.setDescription("Output diagnostics (warnings/errors) in json format");

    outputCodeCompletionsOpt.setCategory(arduinoToolCategory);
    outputCodeCompletionsOpt.setInitialValue("");
    outputCodeCompletionsOpt.setDescription(
            "Output code completions (suggestions) in json format.\n"
            "This option requires the cursor position in the format \"filename:line:col\"");

    cl::AddExtraVersionPrinter(printVersion);

    CommonOptionsParser optParser(argc, argv, arduinoToolCategory);

    /* Parse outputCodeCompletion parameter */
    if (outputCodeCompletionsOpt.getValue() != "") {
        vector<string> spl = split(outputCodeCompletionsOpt.getValue(), ':');
        if (spl.size() != 3) {
            cerr << "code completion requires parameter in the form \"filename:line:col\"\n";
            exit(1);
        }
        codeCompleteFilename = spl[0];
        if (!stringToInt(spl[1], &codeCompleteLine)) {
            cerr << "code completion requires 'line' to be a positive integer parameter in the form \"filename:line:col\"\n";
            exit(1);
        }
        if (!stringToInt(spl[2], &codeCompleteCol)) {
            cerr << "code completion requires 'col' to be a positive integer parameter in the form \"filename:line:col\"\n";
            exit(1);
        }
        outputCodeCompletions = true;
    }

    debugOutput = debugOutputOpt.getValue();
    outputOnlyNeededPrototypes = outputOnlyNeededPrototypesOpt.getValue();
    outputDiagnostics = outputDiagnosticsOpt.getValue();
    if (outputDiagnostics || outputCodeCompletions) {
        outputPreprocessedSketch = false;
    }
    return optParser;
}