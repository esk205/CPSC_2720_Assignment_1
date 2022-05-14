#include "TestCuboid.h"
#include <iostream>
#include "math.h" // necessary for trunc(x) function

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION(TestCuboid);

void TestCuboid::testArea()
{
    // set up
    double w = 1, h = 2, l = 3;
    Cuboid t(w, h, l);
    double area1 = 2*( (w*h) + (w*l) + (h*l)); // expected value
    area1 = trunc(area1); // gets rid of decimal #'s

    double area2 = t.area(); // value to be tested
    area2 = trunc(area2);// gets rid of decimal #'s

    CPPUNIT_ASSERT(area2 == area1); // test if same
}

void TestCuboid::testAreaOverflow()
{
    Cuboid c(DBL_MAX, DBL_MAX, DBL_MAX); // overflow values given.
    //c.area(); // test for calculation error
}

void TestCuboid::testVolume()
{
    // set up
    double w = 3, h = 3, l = 3;
    Cuboid c(w, h, l);
    double volume = w*h*l; // expected value
    // test if same
    CPPUNIT_ASSERT(c.volume() == volume);
}

void TestCuboid::testVolumeOverflow()
{
    Cuboid c(DBL_MAX, DBL_MAX, DBL_MAX); // overflow values given.
    //c.volume(); // test for calculation error
}

void TestCuboid::testGetHeight()
{
    // set up
    double w = 3, h = 4, l = 5;
    Cuboid c(w, h, l);
    // test
    CPPUNIT_ASSERT(c.getHeight() == h);
}

void TestCuboid::testGetWidth()
{
    // set up
    double w = 3, h = 4, l = 5;
    Cuboid c(w, h, l);
    // test
    CPPUNIT_ASSERT(c.getWidth() == w);
}

void TestCuboid::testGetLength()
{
    // set up
    double w = 3, h = 4, l = 5;
    Cuboid c(w, h, l);
    // test
    CPPUNIT_ASSERT(c.getLength() == l);
}
