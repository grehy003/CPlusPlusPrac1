#include "point.h"

Point::Point()
{

}

Point::Point(double x, double y) : _x{x}, _y{y}{}

Point Point::operator+(const Point &point) const{
    double newX = this->x() + point.x();
    double newY = this->y() + point.y();
    return Point(newX,newY);
}

Point Point::operator-(const Point &point) const{
    double newX = this->x() - point.x();
    double newY = this->y() - point.y();
    return Point(newX,newY);
}
Point Point::operator * (const double &scalar) const{
    double newX = this->x() * scalar;
    double newY = this->y() * scalar;
    return Point(newX,newY);
}
