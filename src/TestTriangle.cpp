#include "TestTriangle.h"
#include <iostream>
#include "math.h" // necessary for trunc(x) function

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION(TestTriangle);

void TestTriangle::testArea()
{
    // set up
    double a = 0, b = 0, c = 0;
    Triangle t(a, b, c);
    double s= (a+b+c)/2;
    double area = sqrt( s* ((s-a)*(s-b)*(s-c)) );
    area = trunc(area); // expected value w/o decimals
    double area2 = t.area();
    area2 = trunc(area2); // expected value w/o decimals
    // test
    CPPUNIT_ASSERT(area2 == area);
}
void TestTriangle::testAreaOverflow()
{
    Triangle t(DBL_MAX, DBL_MAX, DBL_MAX);// give overflow values
    //t.area(); // test for calculation error
}
void TestTriangle::testPerimeter()
{
    // set up
    double a = 3, b = 3, c = 3;
    Triangle t(a, b, c);
    double perimeter = a + b + c; // expected values
    // test
    CPPUNIT_ASSERT(t.perimeter() == perimeter);
}
void TestTriangle::testPerimeterOverflow()
{
    Triangle t(DBL_MAX, DBL_MAX, DBL_MAX);// give overflow values
    //t.perimeter(); // test for calculation error
}


