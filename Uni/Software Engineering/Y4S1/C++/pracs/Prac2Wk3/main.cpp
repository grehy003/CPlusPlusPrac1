#include <iostream>
#include "myname.h"

int main()
{
//  MyName name{"Hunter", "Green", "Northcote"};
//  name.show(std::cout);

  MyName name(MyName::readFrom(std::cin));
  name.show(std::cout);

  return 0;
};
