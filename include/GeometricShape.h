#ifndef GEOMETRICSHAPE_H_INCLUDED
#define GEOMETRICSHAPE_H_INCLUDED

/**
    Interface for a generic geometric shape.
*/

class GeometricShape
{
    /**
     *  @return The area of the shape.
     *  @throws calculation_error if the area cannot be correctly calculated.
     */
    virtual double area() const = 0;
};
#endif // GEOMETRICSHAPE_H_INCLUDED
