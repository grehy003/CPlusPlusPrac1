#include "point.h"

Point::Point(float x, float y)
{

}

std::string Point::toString(){
    return "(" + std::to_string(x()) + ", " + std::to_string(y()) + ")";
}
