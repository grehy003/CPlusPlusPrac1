#include <QCoreApplication>
#include <string>
#include <iostream>
#include <point.h>
#include <square.h>

namespace shapes {





}

int main()
{

    float edge,x,y;
    std::cout << "Enter edge length of square, then x and y values for midpoint" << std::endl;

    std::cin >> edge >> x >> y;
    Point p = Point(x,y);
    shapes::Square square = shapes::Square(p,edge);

    std::cout << "Square top left is at: " << square.topLeft().toString() << std::endl;
    std::cout << "Square top right is at: " << square.topRight().toString() << std::endl;
    std::cout << "Square bottom left is at: " << square.bottomLeft().toString() << std::endl;
    std::cout << "Square bottom right is at: " << square.bottomRight().toString() << std::endl;

    std::cout << "Enter values for the square to be translated, x then y" << std::endl;
    std::cin >> x >> y;
    square.translate(x,y);

    std::cout << "Square top left is at: " << square.topLeft().toString() << std::endl;
    std::cout << "Square top right is at: " << square.topRight().toString() << std::endl;
    std::cout << "Square bottom left is at: " << square.bottomLeft().toString() << std::endl;
    std::cout << "Square bottom right is at: " << square.bottomRight().toString() << std::endl;

    return 0;
}
