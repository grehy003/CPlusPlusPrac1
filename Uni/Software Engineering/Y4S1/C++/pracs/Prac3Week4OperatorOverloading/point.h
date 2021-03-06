#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <string>


class Point
{
public:
    Point();
    Point(double x, double y);
    Point(const Point &point) = default;

    Point operator + (const Point& point) const;
    Point operator - (const Point& point) const;
    Point operator * (double scalar) const;
    friend std::ostream & operator<<(std::ostream &out, const Point &point) ;

    double x() const;
    double y() const;
    void setX(double &x);
    void setY(double &y);
private:
    double _x;
    double _y;
};

#endif // POINT_H
