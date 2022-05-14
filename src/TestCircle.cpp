#include "TestCircle.h"
#include <cmath> // necessary for trunc(x) function

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION(TestCircle);

/// Bug: Radius value of zero is a valid value
void TestCircle::testArea()
{
    double r = 3; // radius variable
    double area1 = 3.14159265*r*r; // expected calculated value
    Circle c(r); // create circle object with radius of r
    area1 = trunc(area1); // get rid of decimals

    double area2 = c.area(); // get testable area value
    area2 = trunc(area2); // get rid of decimals

    // test for equilvalent values
    CPPUNIT_ASSERT(area2 == area1);
}
void TestCircle::testAreaOverflow()
{
   Circle c(DBL_MAX); // overflow value given
   //c.area();
}
void TestCircle::testPerimeter()
{
    double r = 0; // radius value
    Circle c(r); // create circle obj.
    double ans = 2*3.14159265*r; // expected value
    ans = trunc(ans); // no decimals

    double perimeter = c.perimeter();
    perimeter = trunc(perimeter); // no decimals

    CPPUNIT_ASSERT(perimeter == ans);
}
void TestCircle::testPerimeterOverflow()
{
    Circle c(DBL_MAX); // overflow value given
    //c.perimeter();
}
void TestCircle::testGetRadius()
{
   Circle c(3); // circle obj. with radius 3
   CPPUNIT_ASSERT(c.getRadius() == 3); // test
}

