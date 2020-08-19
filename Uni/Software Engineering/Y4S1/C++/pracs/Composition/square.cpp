#include "square.h"

namespace shapes {



Square::Square(Point point, float length)
{
    setMidpoint(point);
    setLength(length);
}

void Square::setMidpoint(Point p){
    _midpoint = p;
}

void Square::setLength(float f){
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
