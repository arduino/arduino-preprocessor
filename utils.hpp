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

#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

inline vector<string> split(const string &in, const char sep) {
    vector<string> res;
    istringstream params(in);
    string s;
    while (getline(params, s, sep)) {
        res.push_back(s);
    }
    return res;
}

inline bool stringToInt(const string &in, int *out) {
    stringstream ss(in);
    ss >> *out;
    if (!ss.fail()) {
        return true;
    }
    // Tolerate trailing white space
    ss >> ws;
    if (ss.eof()) {
        return true;
    }
    return false;
}

inline bool startsWith(const string &in, const string &prefix) {
    int l = prefix.length();
    return in.find(prefix.c_str(), 0, l) == 0;
}

inline bool cStrEndsWith(const char *str, const char *suffix) {
  if (str == NULL || suffix == NULL)
    return false;

  size_t strLen = strlen(str);
  size_t suffixLen = strlen(suffix);

  if (suffixLen > strLen)
    return false;

  return strncmp(str + strLen - suffixLen, suffix, suffixLen) == 0;
}

#ifdef WIN32

std::string ReplaceAll(std::string str, const std::string& from, const std::string& to) {
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length(); // Handles case where 'to' is a substring of 'from'
    }
    return str;
}

inline std::string quoteCppString(std::string& str) {
    str = ReplaceAll(str, "\\", "\\\\");
    return str;
}
#else
inline std::string quoteCppString(std::string& str) {
    return str;
}
#endif
