#ifndef TESTCone_H
#define TESTCone_H

#include <cppunit/extensions/HelperMacros.h>
#include "Cone.h"
#include "Exceptions.h"

class TestCone : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TestCone);
    CPPUNIT_TEST(testVolume);
    CPPUNIT_TEST(testVolumeOverflow);
    CPPUNIT_TEST(testArea);
    CPPUNIT_TEST(testAreaOverflow);
    CPPUNIT_TEST(testGetHeight);
    CPPUNIT_TEST(testGetRadius);
    CPPUNIT_TEST_SUITE_END();

public:
    /**
    * Test the volume method for cone
    */
    void testVolume();

     /**
    * Test the volume overflow method for cone
    */
    void testVolumeOverflow();

     /**
    * Test the area method for cone
    */
    void testArea();

     /**
    * Test the area overflow method for cone
    */
    void testAreaOverflow();

     /**
    * Test the getHeight method for cone
    */
    void testGetHeight();
     /**
    * Test the getRadius method for cone
    */
    void testGetRadius();
private:

};

#endif // TESTCone_H
