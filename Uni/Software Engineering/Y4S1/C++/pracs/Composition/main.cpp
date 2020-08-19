#include <QCoreApplication>
#include <string>
#include <iostream>
#include <point.h>
#include <square.h>

namespace shapes {





}

int main()
{
//    Point &p = Point::origin;
//    std::cout << "Origin is at: " << Point::origin.toString() << std::endl;
//    p.setX(10);
//    std::cout << "Origin is at: " << Point::origin.toString() << std::endl;
//    std::cout << "p is at: " << p.toString() << std::endl;

    Point p = Point::origin;
    float e = 3.0;
    shapes::Square sq = shapes::Square(p, e);
    std::cout << "Sq is at:" << sq.toString() << std::endl;

    float x = 3.0;
    float y = 4.7;
    Point q = Point();
    q.setX(x);
    q.setY(y);
    std::cout << "values for q is :" << q.toString() << std::endl;
    sq.setMidpoint(q);
    std::cout << "Sq is at: " << sq.toString() << std::endl;

    const Point t = Point(3.2,8);
    sq.setMidpoint(t);
    std::cout << "values for t is :" << q.toString() << std::endl;
    std::cout << "Sq is at: " << sq.toString() << std::endl;

    return 0;
}
