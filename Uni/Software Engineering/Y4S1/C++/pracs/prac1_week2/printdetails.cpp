#include <iostream>

void printMyDetails() {
  std::cout << "Name: Hunter Green" << std::endl
            << "Email: grehy003@mymail.unisa.edu.au" << std::endl;
}

int getNumber() {
  static int number = 3; // See the note at the bottom for an explanation of 'static' here.
  ++number;
  return number;
}

int main()
{
  printMyDetails();
  for(int i = 0; i < 4; i++){
    std::cout << getNumber() << std::endl;
  }
  return 0;
}


