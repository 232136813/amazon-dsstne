// CppUnit
#include "cppunit/extensions/HelperMacros.h"
#include "cppunit/ui/text/TestRunner.h"
// STL
#include <string>

#include "TestGpu.cpp"
#include "TestSort.cpp"

/**
 * In order to write a new test case, create a Test<File>.cpp and write the test
 * methods in that file. Include the cpp file in this file and also 
 *
 * add runner.addTest(Test<Class>::suite());
 * Unit test file name has to start with Test
 *
 */

int main() {
    CppUnit::TextUi::TestRunner runner;
    runner.addTest(TestGpu::suite());
    runner.addTest(TestSort::suite());
    return !runner.run();
}
