// https://github.com/arduino/arduino-preprocessor/issues/7

#line 1 "issue_7.ino"

int a; int b=f();

int f() {
  return 1;
}
