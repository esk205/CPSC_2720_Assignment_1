#ifndef QUADRILATERIAL_H
#define QUADRILATERIAL_H

#include <Shape2D.h>


/**
* A convex quadrilateral that can be described by width and height.<br>
    * See https://en.wikipedia.org/wiki/Quadrilateral#Convex_quadrilaterals
    */
class Quadrilateral : public Shape2D
{
public:
    /**
    * @param w the width of the quadrilateral.
    * @param h the height of the quadrilateral.
    * @throws invalid_parameter_error if either parameter is <= 0
    */
    Quadrilateral(double w, double h);
    virtual ~Quadrilateral() {}
    double area() const;
    double perimeter() const;
    /**
    * @return the height.
    */
    double getHeight() const;
    /**
    * @return the width.
    */
    double getWidth() const;

protected:

private:
    double width, height;
};

#endif // QUADRILATERIAL_H
