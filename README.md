# Arduino sketch (.ino) preprocessor

This repository contains the source code of the Arduino sketch preoprocessor.
The main purpose of this tool is to parse an Arduino sketch (usually made with the [Arduino IDE](https://github.com/arduino/Arduino)) and convert it into a valid C++ source code.

This tool is based on the Clang/LLVM C/C++ parser and, among the sketch conversion process, provide some useful features used in the Arduino IDE like:

* Diagnostics output in json format
* Code autocomplete suggestions output in json format

## Usage

`./arduino-preprocessor sketch.ino.cpp -- [extra compiler options]`

**TODO**: add command line options

## The sketch (.ino) preprocessing

**TODO**: Describe what happens exactly in the preprocessing

* A sketch may be composed by many `.ino` files that are concatenated into a single `.ino.cpp` file
* Libraries are detected and include path discovered
* A pass of compiler with `-E` flag is made so all macros and include are resolved
* The resulting file is preprocessed and missing prototypes are added

## Credits

This tool use code from the following projects:

- [Clang/LLVM](http://llvm.org)
- [JSON for Modern C++](https://github.com/nlohmann/json)

