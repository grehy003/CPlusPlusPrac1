#include "myname.h"
#include <string.h>
#include <vector>

MyName::MyName(const std::string &first, const std::string &last){
    MyName(first,"Jack",last);
}

MyName::MyName(const std::string &first, const std::string &middle, const std::string &last)
    :_first{first},_middle{middle},_last{last}
{

};

MyName MyName::readFrom(std::istream &input)
{
    //std::string first, middle, last;
    //input >> first >> middle >> last;
    std::vector<std::string> namesVector;

    std::string nameString;

   for(;getline(input,nameString,'\n');){
        namesVector.push_back(nameString);
   }

    if(namesVector.size() < 3){
        return MyName(namesVector[0],namesVector[1]);
    }
    else{
        return MyName(namesVector[0],namesVector[1],namesVector[2]);
    }
};

void MyName::show(std::ostream &output){
    output << _first << " " << _middle << " " << _last << " ";
};

