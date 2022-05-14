#ifndef TESTTriangle_H
#define TESTTriangle_H

#include <cppunit/extensions/HelperMacros.h>
#include "Triangle.h"
#include "Exceptions.h"

class TestTriangle : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TestTriangle);
    CPPUNIT_TEST(testArea);
    CPPUNIT_TEST(testAreaOverflow);
    CPPUNIT_TEST(testPerimeter);
    CPPUNIT_TEST(testPerimeterOverflow);
    CPPUNIT_TEST_SUITE_END();

public:
    /**
    * Test the area method for Triangle
    */
    void testArea();

     /**
    * Test the area overflow method for Triangle
    */
    void testAreaOverflow();

     /**
    * Test the perimeter method for Triangle
    */
    void testPerimeter();

     /**
    * Test the area overflow method for Triangle
    */
    void testPerimeterOverflow();


private:

};

#endif //TESTTriangle_H
