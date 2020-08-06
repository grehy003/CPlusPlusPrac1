#include "myfunctions.h"
#include <random>
#include <ctime>

std::string rollADie() {
  std::mt19937 mtRand{uint32_t(time(nullptr))};
  int random = mtRand() % 6;
  switch (random) {
  case 0:
    return "One";
    break;
   case 1:
    return "Two";
    break;
  case 2:
    return "Three";
    break;
  case 3:
    return "Four";
    break;
  case 4:
    return "Five";
    break;
  case 5:
    return "Six";
  }
  return "Broken Die!";
}
