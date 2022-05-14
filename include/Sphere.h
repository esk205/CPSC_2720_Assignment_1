#ifndef SPHERE_H
#define SPHERE_H

#include "Shape3D.h"
#include "Circle.h"

/**
* Represents a sphere.<br>
     * See https://en.wikipedia.org/wiki/Sphere
     */
class Sphere : public Shape3D
{
public:
    /**
    * @param r the radius of the sphere.
    * @throws invalid_parameter_error if r is <= 0
    */
    Sphere(double r);
    virtual ~Sphere(){}
    double area() const;
    double volume() const;

    /**
    * @return the radius of the sphere
    */
    double getRadius() const;

private:
    double radius;
};

#endif // SPHERE_H
