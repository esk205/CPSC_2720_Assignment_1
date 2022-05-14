#ifndef TESTCylinder_H
#define TESTCylinder_H

#include <cppunit/extensions/HelperMacros.h>
#include "Cylinder.h"
#include "Exceptions.h"

class TestCylinder : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TestCylinder);
    CPPUNIT_TEST(testArea);
    CPPUNIT_TEST(testAreaOverflow);
    CPPUNIT_TEST(testVolume);
    CPPUNIT_TEST(testVolumeOverflow);
    CPPUNIT_TEST_SUITE_END();

public:
    /**
    * Test the area method for Cylinder
    */
    void testArea();

     /**
    * Test the area overflow method for Cylinder
    */
    void testAreaOverflow();

     /**
    * Test the volume method for Cylinder
    */
    void testVolume();

     /**
    * Test the volume overflow method for Cylinder
    */
    void testVolumeOverflow();

   /**
    * Test the get height method for Cylinder
    */
    void testGetHeight();

    /**
    * Test the get radius method for Cylinder
    */
    void testGetRadius();

};

#endif //TESTCylinder_H
