#ifndef TESTCuboid_H
#define TESTCuboid_H

#include <cppunit/extensions/HelperMacros.h>
#include "Cuboid.h"
#include "Exceptions.h"

class TestCuboid : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TestCuboid);
    CPPUNIT_TEST(testArea);
    CPPUNIT_TEST(testAreaOverflow);
    CPPUNIT_TEST(testVolume);
    CPPUNIT_TEST(testVolumeOverflow);
    CPPUNIT_TEST(testGetHeight);
    CPPUNIT_TEST(testGetWidth);
    CPPUNIT_TEST(testGetLength);
    CPPUNIT_TEST_SUITE_END();

public:
    /**
    * Test the area method for Cuboid
    */
    void testArea();

     /**
    * Test the area overflow method for Cuboid
    */
    void testAreaOverflow();

     /**
    * Test the volume method for Cuboid
    */
    void testVolume();

     /**
    * Test the volume overflow method for Cuboid
    */
    void testVolumeOverflow();

    /**
    * Test the get height method for Cuboid
    */
    void testGetHeight();

    /**
    * Test the get width method for Cuboid
    */
    void testGetWidth();

    /**
    * Test the get length method for Cuboid
    */
    void testGetLength();

private:

};

#endif //TESTCuboid_H
