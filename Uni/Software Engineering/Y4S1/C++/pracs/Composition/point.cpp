#include "point.h"

Point Point::origin = Point();

Point::Point(float x, float y)
{
    setX(x);setY(y);
}

void Point::setX(float &x) {
    _x = x;
}

void Point::setY(float &y) {
    _y = y;
}

float Point::x() const{
    return _x;
}

float Point::y() const  {
    return _y;
}

std::string Point::toString(){
    return "(" + std::to_string(x()) + ", " + std::to_string(y()) + ")";
}
