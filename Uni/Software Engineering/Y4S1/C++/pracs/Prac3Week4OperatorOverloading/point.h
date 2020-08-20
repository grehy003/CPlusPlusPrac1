#ifndef POINT_H
#define POINT_H


class Point
{
public:
    Point();
    Point(double x, double y);
    Point(const Point &point) = default;

    friend Point operator +(Point p1, Point p2);

    //friend std::ostream & operator<<(std::ostream &out, const Pie &pie);

    double x() const;
    double y() const;
    void setX(double &x);
    void setY(double &y);
private:
    double _x;
    double _y;
};

#endif // POINT_H
