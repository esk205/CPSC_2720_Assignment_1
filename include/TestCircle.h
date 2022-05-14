#ifndef TESTCircle_H
#define TESTCircle_H

#include <cppunit/extensions/HelperMacros.h>
#include "Circle.h"
#include "Exceptions.h"

class TestCircle : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TestCircle);
    CPPUNIT_TEST(testPerimeter);
    CPPUNIT_TEST(testPerimeterOverflow);
    CPPUNIT_TEST(testArea);
    CPPUNIT_TEST(testAreaOverflow);
    CPPUNIT_TEST(testGetRadius);
    CPPUNIT_TEST_SUITE_END();

public:
    /**
    * Test the perimeter method for Circle
    */
    void testPerimeter();

    /**
    * Test the perimeter overflow method for Circle
    */
    void testPerimeterOverflow();

    /**
    * Test the area method for Circle
    */
    void testArea();

    /**
    * Test the area overflow method for Circle
    */
    void testAreaOverflow();

    /**
    * Test the get radius method for Circle
    */
    void testGetRadius();

private:

};

#endif //TESTCircle_H
