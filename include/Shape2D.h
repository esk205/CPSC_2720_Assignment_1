#ifndef SHAPE2D_H_INCLUDED
#define SHAPE2D_H_INCLUDED

#include "GeometricShape.h"

/**
    Interface for a two-dimensional shape.
*/
class Shape2D : public GeometricShape
{
    /**
    *  @return The perimeter of the shape.
    *  @throws calculation_error if the perimeter cannot be correctly calculated.
    */
    virtual double perimeter() const = 0;
};
#endif // SHAPE2D_H_INCLUDED
