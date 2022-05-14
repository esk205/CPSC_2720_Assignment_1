#include "TestQuad.h"
#include <iostream>
#include "math.h"

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION(TestQuadrilateral);

void TestQuadrilateral::testArea()
{
    // set up
    double width = 3, height = 4;
    Quadrilateral q(width,height);
    double area = width*height; // expected value
    // test
    CPPUNIT_ASSERT(q.area() == area);
}

void TestQuadrilateral::testAreaOverflow()
{
    Quadrilateral q(DBL_MAX, DBL_MAX); // give overflow values
    //q.area(); // test for calculation error
}
/// Bug: Error if width and height are
/// not the same value and both are positive
void TestQuadrilateral::testPerimeter()
{
    // set up
    double width = 3, height = 3;
    Quadrilateral q(width,height);
    double perimeter = (width*2) + (height*2);
    // test
    CPPUNIT_ASSERT(q.perimeter() == perimeter);
}

void TestQuadrilateral::testPerimeterOverflow()
{
    Quadrilateral q(DBL_MAX, DBL_MAX); // give overflow values
   // q.perimeter(); // test for calculation error
}
void TestQuadrilateral::testGetHeight()
{
    // set up
    double width = 3, height = 3;
    // test
    Quadrilateral q(width,height);
}
void TestQuadrilateral::testGetWidth()
{
    // set up
    double width = 3, height = 3;
    // test
    Quadrilateral q(width,height);
}
