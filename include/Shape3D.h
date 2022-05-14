#ifndef SHAPE3D_H_INCLUDED
#define SHAPE3D_H_INCLUDED

#include "GeometricShape.h"

/**
    Interface for a three-dimensional shape.
*/

class Shape3D : public GeometricShape
{
    /**
    *  @return The volume of the shape.
    */
    virtual double volume() const = 0;
};
#endif // SHAPE3D_H_INCLUDED
