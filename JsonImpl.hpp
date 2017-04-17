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

#pragma once

#include <clang/AST/ASTConsumer.h>
#include <clang/Basic/SourceManager.h>
#include <sstream>

using namespace clang;
using namespace std;

#define JSON_NOEXCEPTION
#include "json.hpp"
using json = nlohmann::json;

template<unsigned InternalLen>
inline string encode(const SmallString<InternalLen> &s) {
    return s.str().str();
}

inline json encode(const SourceManager &sm, const SourceLocation &loc) {
    PresumedLoc presumed = sm.getPresumedLoc(loc);
    stringstream pos;
    pos << presumed.getLine() << ":" << presumed.getColumn();
    return json{
        {"file", presumed.getFilename()},
        {"pos", pos.str()}};
}

inline json encode(const SourceManager &sm, const CharSourceRange &range) {
    if (range.isInvalid()) {
        return json{};
    }
    return json{
        {"begin", encode(sm, range.getBegin())},
        {"end", encode(sm, range.getEnd())}};
}

inline json encode(const SourceManager &sm, const FixItHint &hint) {
    return json{
        {"before_previous", hint.BeforePreviousInsertions},
        {"text", hint.CodeToInsert},
        {"insert_from", encode(sm, hint.InsertFromRange)},
        {"remove", encode(sm, hint.RemoveRange)}};
}

template<typename T>
inline json encode(const SourceManager &sm, const ArrayRef<T> &array) {
    json res = json::array();
    for (T elem : array) {
        res.push_back(encode(sm, elem));
    }
    return res;
}
