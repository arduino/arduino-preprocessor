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

source term.sh

test_preprocessor() {
	rm -rf tmp
	mkdir tmp

	TEST=$1
	say "@cyan[[Testing preprocessor on @b$TEST]]"
	../arduino-preprocessor/arduino-preprocessor $TEST -- -std=gnu++11 > tmp/preproc.cpp
	if [ $? -ne 0 ]; then
		fail "Error running arduino-preprocessor"
		return 1
	fi

	say "@cyan[[Running compiler...]]"
	g++ -std=gnu++11 -c tmp/preproc.cpp -o tmp/preproc.o
	if [ $? -ne 0 ]; then
		# if the test fails output the preprocessed source code
		echo ""
		say "@cyan[[Preprocessor output with debugging enabled:]]"
		echo ""

		../arduino-preprocessor/arduino-preprocessor -debug $TEST -- -std=gnu++11

		fail $TEST
		return 1
	fi
	pass $TEST
	return 0
}

# Try to build all sources in testdata
hr
FAILS=0
TOTAL=0
for TEST in `find testdata -name "test_*.cpp"`; do
	test_preprocessor $TEST
	FAILS=$(($FAILS+$?))
	TOTAL=$(($TOTAL+1))
	hr
done

echo $TOTAL tests run
echo $FAILS tests failed

exit $FAILS

