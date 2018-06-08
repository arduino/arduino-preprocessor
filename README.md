# Arduino Sketch preprocessor

[![Build Status](https://travis-ci.org/arduino/arduino-preprocessor.svg?branch=master)](https://travis-ci.org/arduino/arduino-preprocessor)

This repository contains the source code of the Arduino Sketch preprocessor.
The main purpose of this tool is to parse an Arduino Sketch (usually made with the [Arduino IDE](https://github.com/arduino/Arduino)) and convert it into a valid C++ source code.

This tool is based on the Clang/LLVM C++11 parser and provides also some useful features used in the Arduino IDE like:

* Diagnostics output in JSON format
* Code autocomplete suggestions output in JSON format

## About the Arduino Sketch (.ino) preprocessing

The Arduino Sketch is a simplified C++ source code that can be composed by many files with the extension `.ino`.
To convert the Sketch into a valid C++ file, a number of actions are needed:

* If the Sketch is composed by many `.ino` files, those files are concatenated together into a single `.ino.cpp` file
* An `#include <Arduino.h>` is added at the beginning of the Sketch if not already present
* All needed libraries are detected and include paths are discovered
* All `#include` directives are replaced with the actual content of the files included (this is made with a run of `gcc` or another command line compatible compiler with the `-E` flag)

and finally:

* The resulting file is preprocessed to automatically add missing function prototypes (forward declarations)

The `arduino-preprocessor` tool takes care to handle this last step.

## Usage

```
./arduino-preprocessor [-output-only-needed-prototypes]
                       [-output-code-completions=file:line:col]
                       [-output-diagnostics]
                       [-help] [-version]
                       [-debug]
                       <sketch.ino.cpp> --
                       [extra compiler options]
```

The only mandatory parameter is the name of the file to be processed and the terminating double dash `--`. Every parameter after the `--` is passed as-is to the clang compiler backend.

The tool outputs the processed source code on the standard output.

For example the file `t.cpp`:

```
void a() {
  b();
}

void b() {
}
```

will be processed as:

```
$ ./arduino-preprocessor t.cpp --
#line 2 "/home/cmaglie/Workspace/arduino-preprocessor/t.cpp"
void a();
#line 6 "/home/cmaglie/Workspace/arduino-preprocessor/t.cpp"
void b();
#line 2 "/home/cmaglie/Workspace/arduino-preprocessor/t.cpp"
void a() {
  b();
}

void b() {
}
```

### Option `-output-only-needed-prototypes`

Note: this option is **very experimental** and barely tested, **use at your own risk**.

By default `arduino-preprocessor` produces the forward prototypes of **all** functions, but if the option `-output-only-needed-prototypes` is used, the output will contains only the **needed** prototypes. If we look at the previous example the result will be:

```
$ ./arduino-preprocessor t.cpp -output-only-needed-prototypes --

#line 6 "/home/cmaglie/Workspace/arduino-preprocessor/t.cpp"
void b();
#line 2 "/home/cmaglie/Workspace/arduino-preprocessor/t.cpp"
void a() {
  b();
}

void b() {
}
```

### Option `-output-code-completions=file:line:col`

Output code completions for the specified file at the specified line in JSON format. `file` should be specified with full path (as reported in the `#line` directives of the processed output).

`line` and `col` are 1-based indexes (so the first column/line is `1` and not `0`)

Example:

```
$ ./arduino-preprocessor t.cpp -output-code-completions=/home/cmaglie/Workspace/arduino-preprocessor/t.cpp:3:1 --
[...big json output follows...]
```

The processed source will **not** be part of the output when this option is enabled.

### Option `-output-diagnostics`

Output diagnostics (errors and warnings) in JSON format. The processed source will **not** be part of the output if this option is enabled.

### Option `-debug`

This option enable debugging output during the processing of the Sketch and a lot of debugging messages are printed. This option should be used when a problem is found to understand what's happening and to produce a better bug-report when filing an issue.

### Option `-version`

Prints the version of the tool

### Option `-help`

Prints a short help

## Credits

This tool use code from the following projects:

- [Clang/LLVM](http://llvm.org)
- [JSON for Modern C++](https://github.com/nlohmann/json)
