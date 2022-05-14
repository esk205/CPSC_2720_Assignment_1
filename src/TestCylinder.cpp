#include "TestCylinder.h"
#include <iostream>
#include "math.h" // necessary for trunc(x) function

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION(TestCylinder);

void TestCylinder::testArea()
{
    // set up
    double r = 15, h = 15, pi = 3.14159265;
    Cylinder c(r,h);
    double area = ((2*pi*r*h) + (2*pi*r*r));
    area = trunc(area); // expected value w/o decimals
    double area2 = c.area();
    area2 = trunc(area2); // value to be tested w/o decimals
    // test
    CPPUNIT_ASSERT(area2== area);
}
void TestCylinder::testAreaOverflow()
{
    Cylinder c(DBL_MAX,DBL_MAX);// give overflow values
    //c.area(); // test to trigger calculation error
}
void TestCylinder::testVolume()
{
    // set up
    double r = 10, h = 10, pi = 3.14159265;
    Cylinder c(r,h);
    double volume = pi * r * r * h; //
    volume = trunc(volume); // expected value w/o decimals
    double volume2 = c.volume();
    volume2 = trunc(volume2); // value to be tested w/o decimals
    // test
    CPPUNIT_ASSERT(volume2 == volume);
}
void TestCylinder::testVolumeOverflow()
{
    Cylinder c(DBL_MAX,DBL_MAX); // give overflow values
    //c.volume(); test to trigger calculation error
}
void TestCylinder::testGetHeight()
{
    // set up
    double r = 3, h = 10;
    Cylinder c(r,h);
    // test
    CPPUNIT_ASSERT(c.getHeight() == h);
}
void TestCylinder::testGetRadius()
{
    // set up
    double r = 10, h = 3;
    Cylinder c(r,h);
    // test
    CPPUNIT_ASSERT(c.getRadius() == r);
}

