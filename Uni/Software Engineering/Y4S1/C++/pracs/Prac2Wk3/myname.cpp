#include "myname.h"



MyName::MyName(const std::string &first, const std::string &last, const std::string &middle)
    :_first{first},_last{last},_middle{middle}
{

};

MyName MyName::readFrom(std::istream &input)
{
    std::string first, last, middle;
    input >> first >> last >> middle;
    return MyName(first,last,middle);
};

void MyName::show(std::ostream &output){
    output << _first << " " << _last << " " << _middle << " ";
};

