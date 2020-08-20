#include "point.h"

Point::Point()
{

}

Point::Point(double x, double y) : _x{x}, _y{y}{}

Point  operator + (Point p1, Point p2){
    double newX = p1.x() + p2.x();
    double newY = p1.y() + p2.y();
    return Point(newX,newY);
}
