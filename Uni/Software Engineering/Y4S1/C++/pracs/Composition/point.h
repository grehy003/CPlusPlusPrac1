#ifndef POINT_H
#define POINT_H
#include<string>


class Point
{
public:
    static Point origin;

    Point(float x = 0, float y = 0);
    float x() const;
    float y() const;
    void setX(float &x);
    void setY(float &y);
    std::string toString();
private:
  float _x;
  float _y;
};

#endif // POINT_H
