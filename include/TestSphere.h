#ifndef TESTSphere_H
#define TESTSphere_H

#include <cppunit/extensions/HelperMacros.h>
#include "Sphere.h"
#include "Exceptions.h"

class TestSphere : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TestSphere);
    CPPUNIT_TEST(testArea);
    CPPUNIT_TEST(testAreaOverflow);
    CPPUNIT_TEST(testVolume);
    CPPUNIT_TEST(testVolumeOverflow);
    CPPUNIT_TEST_SUITE_END();

public:
    /**
    * Test the area method for Sphere
    */
    void testArea();

     /**
    * Test the area overflow method for Sphere
    */
    void testAreaOverflow();

     /**
    * Test the volume method for Sphere
    */
    void testVolume();

     /**
    * Test the volume overflow method for Sphere
    */
    void testVolumeOverflow();


private:

};

#endif //TESTSphere_H
