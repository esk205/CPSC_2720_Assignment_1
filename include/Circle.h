#ifndef CIRCLE_H
#define CIRCLE_H

#include <Shape2D.h>

/**
* Represents a circle.<br>
     * See https://en.wikipedia.org/wiki/Circle
     */
class Circle : public Shape2D
{
public:
    /**
    * @param r the radius of the circle.
    * @throws invalid_parameter_error if radius is <= 0
    */
    Circle(double r);
    virtual ~Circle() {}
    double area() const;
    double perimeter() const;

    /**
    * @return radius of the circle
    */
    double getRadius() const;

private:
    double radius;
};

#endif // CIRCLE_H
