#ifndef CONE_H
#define CONE_H

#include <Shape3D.h>
#include "Circle.h"

/**
* Represents a cone.<br>
  * See https://en.wikipedia.org/wiki/Cone
  */
class Cone : public Shape3D
{
public:
    /**
      * @param r the radius of the cone.
      * @param h the height of the cone.
      * @throws invalid_parameter_error if radius or height is <= 0
      */
    Cone(double r, double h);

    virtual ~Cone();
    double area() const;
    double volume() const;

    /**
    * @return the height.
    */
    double getHeight() const;

    /**
    * @return the radius.
    */
    double getRadius() const;

protected:

private:
    Circle* c;
    double height;
};

#endif // CONE_H
