#include <iostream>
#include <ctime>
#include <random>
#include <vector>
#include <chrono>
#include <thread>

unsigned int getRandom();

int main()
{
    std::cout << "This program demonstrates C++ basic syntax" << std::endl;

    // TODO: implement according to the instructions
    std::cout << "Would you like to begin: (y/n)" << std::endl;


    char beginAnswer;
    std::cin >> beginAnswer;

    switch(beginAnswer){
    case 'y':
        std::cout << "You said Yes, continuing execution." << std::endl;
        break;
    case 'Y':
        std::cout << "You said Yes, continuing execution." << std::endl;
        break;
    case 'n':
        std::cout << "You said No, quitting now." << std::endl;
        return 0;
        break;
    case 'N':
        std::cout << "You said No, quitting now." << std::endl;
        return 0;
        break;
    default:
        std::cout << "You entered an invalid option. Terminating with error" << std::endl;
        return 1;
    }

    std::vector<int> numbers{};
    for(int i = 0; i < 10; i++){
        numbers.push_back(getRandom() % 100);
    }

    std::cout << "The numbers are: " << std::endl;

    for(int i : numbers){
        std::cout << i << std::endl;
    }

    int numberSum = 0;
    int numberIterator = 0;
    while (numberSum % 2 == 0 && numberIterator < numbers.size() - 1) {
        numberSum += numbers.at(numberIterator);
        numberIterator++;
    }
    std::cout << "The summed value is: " << numberSum << std::endl;

    //Ternary syntax: Condition        ? True              : False     ;
    int lastIndex = numberIterator > 0 ? numberIterator -1 : abs(numberIterator -1) ;

    std::cout << "The lastIndex value is: " << lastIndex << std::endl;
    return 0;


    if(lastIndex == numbers.size() -1){
        std::cout << "Processed all numbers" << std::endl;
    }
    else if(lastIndex > (numbers.size() -1) / 2 ){
        std::cout << "Almost made it all the way" << std::endl;
    }
    else{
         std::cout << "Didn't even get half way" << std::endl;
    }

}

/**
 * @brief getRandom answers a random number
 *
 * Abstracting out the use of the random generator a function makes it easier to
 * change the random number generator if necessary because there is only 1 location in
 * the code that is dependent on the random number generator implementation.
 *
 * @return a random integer
 */
unsigned int getRandom() {
    static std::mt19937 mtRand{uint32_t(time(nullptr))};
    return mtRand();
}
