#ifndef RECTANGULARPYRAMID_H
#define RECTANGULARPYRAMID_H

#include <Shape3D.h>
#include "Quadrilateral.h"

/**
* Represents a cuboid, also known as a rectangular prism.<br>
    * See https://en.wikipedia.org/wiki/Cuboid
    */
class Cuboid : public Shape3D
{
public:
    /*
    * @param w the width of the cuboid.
    * @param h the height of the cuboid.
    * @param l the length of the cuboid.
    * @throws invalid_parameter_error if one of the dimensions is <= 0
    */
    Cuboid(double w, double h, double l);
    virtual ~Cuboid();
    double area() const;
    double volume() const;

    /**
    * @return the height.
    */
    double getHeight() const;

     /**
    * @return the width.
    */
    double getWidth() const;

     /**
    * @return the length.
    */
    double getLength() const;

protected:

private:
    Quadrilateral* q;
    double height;
};

#endif // RECTANGULARPYRAMID_H
