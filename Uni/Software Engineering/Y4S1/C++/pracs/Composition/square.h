#ifndef SQUARE_H
#define SQUARE_H
#include<point.h>

namespace shapes {



class Square
{
public:
    Square(Point point, float length);
    void setMidpoint(Point&);
    void setLength(float&);
    Point &midpoint();
    float length() const;
    std::string toString();

    Point topLeft() const;
    Point topRight() const;
    Point bottomLeft() const;
    Point bottomRight() const;

    void translate(const Point& amount);
private:
    Point _midpoint;
    float _length;
};

#endif // SQUARE_H

}
