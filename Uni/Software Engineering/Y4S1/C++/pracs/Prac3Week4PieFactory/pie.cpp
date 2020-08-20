#include "pie.h"

Pie::Pie()
{

}

std::ostream & operator << (std::ostream &out, const Pie &pie){
    return out << pie.description() + pie.tastiness();
}

std::string Pie::tastiness() const{
    return "-----";
}

std::string Pie::description() const{
    return "Pie";
}
