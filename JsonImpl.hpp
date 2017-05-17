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
#include "clang/include/clang/Sema/CodeCompleteConsumer.h"
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

inline json encode(const CodeCompletionString *ccs) {
    json chunks = json::array();
    for (const CodeCompletionString::Chunk &c : *ccs) {
        switch (c.Kind) {
            case CodeCompletionString::ChunkKind::CK_Colon:
                chunks.push_back(json{
                    {"t", ":"}
                });
                break;
            case CodeCompletionString::ChunkKind::CK_Comma:
                chunks.push_back(json{
                    {"t", ","}
                });
                break;
            case CodeCompletionString::ChunkKind::CK_CurrentParameter:
                chunks.push_back(json{
                    {"current_param", c.Text}
                });
                break;
            case CodeCompletionString::ChunkKind::CK_Equal:
                chunks.push_back(json{
                    {"t", "="}
                });
                break;
            case CodeCompletionString::ChunkKind::CK_HorizontalSpace:
                chunks.push_back(json{
                    {"t", " "}
                });
                break;
            case CodeCompletionString::ChunkKind::CK_Informative:
                chunks.push_back(json{
                    {"info", c.Text}
                });
                break;
            case CodeCompletionString::ChunkKind::CK_LeftAngle:
                chunks.push_back(json{
                    {"t", "<"}
                });
                break;
            case CodeCompletionString::ChunkKind::CK_LeftBrace:
                chunks.push_back(json{
                    {"t", "{"}
                });
                break;
            case CodeCompletionString::ChunkKind::CK_LeftBracket:
                chunks.push_back(json{
                    {"t", "["}
                });
                break;
            case CodeCompletionString::ChunkKind::CK_LeftParen:
                chunks.push_back(json{
                    {"t", "("}
                });
                break;
            case CodeCompletionString::ChunkKind::CK_Optional:
                chunks.push_back(json{
                    {"optional", encode(c.Optional)}
                });
                break;
            case CodeCompletionString::ChunkKind::CK_Placeholder:
                chunks.push_back(json{
                    {"placeholder", c.Text}
                });
                break;
            case CodeCompletionString::ChunkKind::CK_ResultType:
                chunks.push_back(json{
                    {"res", c.Text}
                });
                break;
            case CodeCompletionString::ChunkKind::CK_RightAngle:
                chunks.push_back(json{
                    {"t", ">"}
                });
                break;
            case CodeCompletionString::ChunkKind::CK_RightBrace:
                chunks.push_back(json{
                    {"t", "}"}
                });
                break;
            case CodeCompletionString::ChunkKind::CK_RightBracket:
                chunks.push_back(json{
                    {"t", "]"}
                });
                break;
            case CodeCompletionString::ChunkKind::CK_RightParen:
                chunks.push_back(json{
                    {"t", ")"}
                });
                break;
            case CodeCompletionString::ChunkKind::CK_SemiColon:
                chunks.push_back(json{
                    {"t", ";"}
                });
                break;
            case CodeCompletionString::ChunkKind::CK_Text:
                chunks.push_back(json{
                    {"t", c.Text}
                });
                break;
            case CodeCompletionString::ChunkKind::CK_TypedText:
                chunks.push_back(json{
                    {"typedtext", c.Text}
                });
                break;
            case CodeCompletionString::ChunkKind::CK_VerticalSpace:
                chunks.push_back(json{
                    {"t", "\n"}
                });
                break;
        };
    }

    json res = json::object();
    res["chunks"] = chunks;
    // This seems to be redundant
    //if (ccs->getTypedText()) {
    //    res["typedtext"] = ccs->getTypedText();
    //}
    if (ccs->getBriefComment()) {
        res["brief"] = ccs->getBriefComment();
    }
    return res;
}

inline json encode(const CodeCompletionResult &cc, const CodeCompletionString *ccs, const SourceManager &sm) {
    // TODO: To obtain the complete documentation comment we must
    // explore cc.Declaration AST
    //cc.Declaration->dump();

    json res = json{
        {"completion", encode(ccs)}
    };
    switch (cc.Kind) {
        case CodeCompletionResult::RK_Declaration:
        {
            SourceLocation loc = cc.Declaration->getLocation();
            PresumedLoc presumedLoc = sm.getPresumedLoc(loc);
            res["location"] = presumedLoc.getFilename();
            res["type"] = cc.Declaration->getDeclKindName();
            break;
        }
        case CodeCompletionResult::RK_Keyword:
        {
            res["type"] = "Keyword";
            break;
        }
        case CodeCompletionResult::RK_Pattern:
        {
            res["type"] = "Pattern";
            break;
        }
        case CodeCompletionResult::RK_Macro:
        {
            res["type"] = "Macro";
            break;
        }
    };
    return res;
}