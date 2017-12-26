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

#include <clang/Basic/Diagnostic.h>

#include "ArduinoDiagnosticConsumer.hpp"
#include "CommandLine.hpp"
#include "JsonImpl.hpp"
#include "utils.hpp"

using namespace clang;

void ArduinoDiagnosticConsumer::collectUndeclaredIdentifiersIn(IdentifiersList &list) {
    undeclaredIdentifiersList = &list;
}

void ArduinoDiagnosticConsumer::outputJsonDiagnosticsTo(raw_ostream &out) {
    jsonDiagnosticOutput = &out;
}

void ArduinoDiagnosticConsumer::HandleDiagnostic(DiagnosticsEngine::Level level, const Diagnostic& info) {
    // DiagnosticConsumer::HandleDiagnostic(level, info);

    if (undeclaredIdentifiersList && level == DiagnosticsEngine::Level::Error) {
        const SourceManager &sm = info.getSourceManager();
        const SourceLocation &loc = info.getLocation();
        const SourceLocation &sl = sm.getSpellingLoc(loc);
        const char *presumedFilename = sm.getPresumedLoc(sl).getFilename();
        if (debugOutput) {
            outs() << sm.getSpellingLineNumber(sl) << ":" << sm.getSpellingColumnNumber(sl) << " (";
            outs() << presumedFilename << ") ";
        }

        if (!cStrEndsWith(presumedFilename, ".ino")) {
            if (debugOutput) {
                outs() << "Ignoring non .ino source file\n";
            }
            return;
        }

        unsigned id = info.getID();
        if (id == 3441 || id == 3442 /* use of undeclared identifier */) {
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
            undeclaredIdentifiersList->push_front(m);
            return;
        }

    }

    if (jsonDiagnosticOutput) {
        const SourceManager &sm = info.getSourceManager();

        SmallString<100> message;
        info.FormatDiagnostic(message);

        json data = json{
            {"location", encode(sm, info.getLocation())},
            {"message", encode(message)},
            {"ranges", encode(sm, info.getRanges())},
            {"hints", encode(sm, info.getFixItHints())},
        };
        *jsonDiagnosticOutput << data.dump() << "\n";
    }

    if (debugOutput) {
        SmallString<100> outStr;
        info.FormatDiagnostic(outStr);
        outs() << "(" << info.getID() << ") " << outStr << "\n";
    }
}
