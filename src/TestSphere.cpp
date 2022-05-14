#include "TestSphere.h"
#include <iostream>
#include "math.h" // necessary for trunc(x) function

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION(TestSphere);

void TestSphere::testArea()
{
    // set up
    double r = 13, pi = 3.14159265;
    Sphere s(r);
    double area = 4*pi*r*r;
    area = trunc(area); // expected value w/o decimals
    double area2 = s.area();
    area2 = trunc(area2); // test value w/o decimals
    // test
    CPPUNIT_ASSERT(area2 == area);
}
void TestSphere::testAreaOverflow()
{
    Sphere s(DBL_MAX); // give overflow values
   // s.area(); // test for calculation error
}
void TestSphere::testVolume()
{
    // set up
    double r = 11, pi = 3.14159265;
    Sphere s(r);
    double volume = 1.33333333*pi*pow(r, 3);
    volume = trunc(volume); // expected value w/o decimals
    double volume2 = s.volume();
    volume2 = trunc(volume2); // value to be tested w/o decimals
    // test
    CPPUNIT_ASSERT(volume2 == volume);
}
void TestSphere::testVolumeOverflow()
{
    Sphere s(DBL_MAX); // give overflow values
    //s.volume(); // test for calculation error
}


