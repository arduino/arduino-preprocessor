#!/bin/bash

#
# This file is part of arduino-preprocessor.
#
# Copyright 2017 ARDUINO AG
#
# arduino-preprocessor is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
#
# As a special exception, you may use this file as part of a free software
# library without restriction.  Specifically, if other files instantiate
# templates or use macros or inline functions from this file, or you compile
# this file and link it with other files to produce an executable, this
# file does not by itself cause the resulting executable to be covered by
# the GNU General Public License.  This exception does not however
# invalidate any other reasons why the executable file might be covered by
# the GNU General Public License.
#

# Borrowed from https://stackoverflow.com/a/46331700
say() {
	echo "$@" | sed \
		-e "s/\(\(@\(red\|green\|yellow\|blue\|magenta\|cyan\|white\|reset\|b\|u\)\)\+\)[[]\{2\}\(.*\)[]]\{2\}/\1\4@reset/g" \
		-e "s/@red/$(tput setaf 1)/g" \
		-e "s/@green/$(tput setaf 2)/g" \
		-e "s/@yellow/$(tput setaf 3)/g" \
		-e "s/@blue/$(tput setaf 4)/g" \
		-e "s/@magenta/$(tput setaf 5)/g" \
		-e "s/@cyan/$(tput setaf 6)/g" \
		-e "s/@white/$(tput setaf 7)/g" \
		-e "s/@reset/$(tput sgr0)/g" \
		-e "s/@b/$(tput bold)/g" \
		-e "s/@u/$(tput sgr 0 1)/g"
}

hr() {
	echo ""
	echo "==========================================================================="
	echo ""
}

fail() {
	say "@b@red[[FAIL: $1]]"
}

pass() {
	say "@b@green[[PASS: $1]]"
}


