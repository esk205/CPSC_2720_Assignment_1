#ifndef TESTQuadrilateral_H
#define TESTQuadrilateral_H

#include <cppunit/extensions/HelperMacros.h>
#include "Quadrilateral.h"
#include "Exceptions.h"

class TestQuadrilateral : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TestQuadrilateral);
    CPPUNIT_TEST(testPerimeter);
    CPPUNIT_TEST(testPerimeterOverflow);
    CPPUNIT_TEST(testArea);
    CPPUNIT_TEST(testAreaOverflow);
    CPPUNIT_TEST(testGetHeight);
    CPPUNIT_TEST(testGetWidth);
    CPPUNIT_TEST_SUITE_END();

public:
    /**
    * Test the perimeter method for quadrilaterals
    */
    void testPerimeter();

     /**
    * Test the perimeter overflow method for quadrilaterals
    */
    void testPerimeterOverflow();

     /**
    * Test the area method for quadrilaterals
    */
    void testArea();

     /**
    * Test the area overflow method for quadrilaterals
    */
    void testAreaOverflow();

     /**
    * Test the getHeight method for quadrilaterals
    */
    void testGetHeight();

     /**
    * Test the getWidth method for quadrilaterals
    */
    void testGetWidth();
private:

};

#endif // TESTQuadrilateral_H
