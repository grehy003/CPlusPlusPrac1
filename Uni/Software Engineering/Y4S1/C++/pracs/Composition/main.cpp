#include <QCoreApplication>
#include <string>
#include <iostream>
#include <point.h>

int main()
{
    Point &p = Point::origin;
    std::cout << "Origin is at: " << Point::origin.toString() << std::endl;
    p.setX(10);
    std::cout << "Origin is at: " << Point::origin.toString() << std::endl;
    std::cout << "p is at: " << p.toString() << std::endl;
    return 0;
}
