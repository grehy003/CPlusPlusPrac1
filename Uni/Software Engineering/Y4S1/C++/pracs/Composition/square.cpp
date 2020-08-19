#include "square.h"

namespace shapes {



Square::Square(Point point, float length)
{
    setMidpoint(point);
    setLength(length);
}

Point Square::topLeft() const{
    return Point(this->_midpoint.x() - (length() /2), this->_midpoint.y() + (length() /2));
}

Point Square::topRight() const{
    return Point(this->_midpoint.x() + (length() /2), this->_midpoint.y() + (length() /2));
}

Point Square::bottomLeft() const{
    return Point(this->_midpoint.x() - (length() /2), this->_midpoint.y() - (length() /2));
}

Point Square::bottomRight() const{
    return Point(this->_midpoint.x() + (length() /2), this->_midpoint.y() - (length() /2));
}

void Square::setMidpoint(Point &p){
    _midpoint = p;
}

void Square::setLength(float &f){
    _length = f;
}

float Square::length() const{
    return _length;
}

Point & Square::midpoint(){
    return _midpoint;
}

std::string Square::toString(){
    return "midpoint: " + midpoint().toString() + "edge: " + std::to_string(length());
}

}
