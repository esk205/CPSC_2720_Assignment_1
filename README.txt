
Instructions
------------------
See asn1.rtf for the instructions for the assignment.

Files
------------------
These are the files for the first assignment of CPSC 2720 Fall 2016.

libshapes.a - a static library containing the implementation of the classes that you will be testing in this assignment.

libshapes-clean.a - a static library containing bug-free implementation of the classes for checking that your unit tests are correct.

include/ - contains the header files for the classes that you will test.

src/ - contains the test runner and an example test suite to get you started.

Compiling
-----------------
The following commandline will compile the files:

g++11 -I include -L. -o test libshapes.a src/main.cpp src/TestQuad.cpp  -lcppunit  -lshapes

Running Tests
----------------
To run the tests, execute the following:

./tests

The provided test suite will fail and you will see the following output:

.F

TestQuad.cpp:10:Assertion
Test name: TestQuadrilateral::testPerimeter
assertion failed
- Expression: false

Failures !!!
Run: 1   Failure total: 1   Failures: 1   Errors: 0

Where to go from here
----------------
From here, you will create test suites and unit tests to test the provided library. 
The library contains bugs, so not all of your unit tests should pass.