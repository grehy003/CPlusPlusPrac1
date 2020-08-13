#ifndef POINT_H
#define POINT_H


class Point
{
public:
    Point(float x = 0, float y = 0);

    float x() const;
    float y() const;

    void setX(float x);
    void setY(float y);

    static Point origin;
private:
  float _x;
  float _y;
};

#endif // POINT_H
