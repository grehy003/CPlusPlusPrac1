#include <iostream>
#include <cctype>
#include <ctime>
#include <random>

int main()
{
  //Game introduction
  std::cout << "Welcome to Software Development with C++" << std::endl;
  std::cout << "Would you like to play a game? (y/n) ";
  char input;
  std::cin >> input;


  if (tolower(input) == 'y') {
    std::cout << "Try to guess how many fingers I'm holding up (0 - 10, inclusive): ";
    // The below line creates and seeds a mersenne twister random number generator with the current time
    std::mt19937 mtRand{uint32_t(time(nullptr))};
    int fingers = mtRand() % 10;

    //Applies the players input to a variable
    int guess;
    std::cin >> guess;
    int guessCount = 1;

    //Loop while the guess is incorrect
    while (guess != fingers) {
        std::cout << "guessCount: " << guessCount << std::endl;
      if (guess < fingers) {
        std::cout << "More than that." << std::endl;
      } else if (guess > fingers) {
        std::cout << "Less than that." << std::endl;
      } else {
        break;
      }
      std::cout << "Have another guess: ";
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cin >> guess;
      std::cout << "You entered: " << guess << std::endl;
      ++guessCount;
    }

    //Exit loop
    std::cout << "You guessed correctly, "
              << ((guessCount == 1) ? "on the first try!":
                  (guessCount < 5) ? "well done." : "pity it took so long.")
              << std::endl;
  }
}
