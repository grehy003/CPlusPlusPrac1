#ifndef POINT_H
#define POINT_H


class Point
{
public:
    Point();
    double x() const;
    double y() const;
    void setX(double &x);
    void setY(double &y);
private:
    double _x;
    double _y;
};

#endif // POINT_H
