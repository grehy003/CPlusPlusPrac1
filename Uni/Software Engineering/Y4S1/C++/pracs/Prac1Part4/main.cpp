#include <iostream>
#include <ctime>
#include <random>
#include <vector>
#include <chrono>
#include <thread>

unsigned int getRandom();
int promptAnswerSort(char);
char promptAnswer();
std::vector<int> generateNumbersVector();
void printVectorElements(std::vector<int> numbers);
int sumVector(std::vector<int> numbers);
int lastIndexCalc(int,std::vector<int>);
void lastIndexProcessCheck(int,int);

int main()
{
    std::cout << "This program demonstrates C++ basic syntax" << std::endl;

    // TODO: implement according to the instructions
    promptAnswerSort(promptAnswer());

    std::vector<int> numbers{};
    numbers = generateNumbersVector();
    printVectorElements(numbers);

    int sumOfVector = sumVector(numbers);
    std::cout << "The summed value is: " << sumVector(numbers) << std::endl;

    int lastIndex = lastIndexCalc(sumOfVector, numbers);
    std::cout << "The lastIndex value is: " << lastIndex << std::endl;
    lastIndexProcessCheck(lastIndex, numbers.size());
    return 0;

}

int lastIndexCalc(int sumVector,std::vector<int> numbers){
    int numberIterator;
    for(int i = 0; i < numbers.size(); i++){
        if(sumVector != numbers.at(i)){
            sumVector -= numbers.at(i);
        }
        else{
            numberIterator = i - 1;
            break;
        }
    }
    return numberIterator > 0 ? numberIterator -1 : abs(numberIterator -1) ;
}

void lastIndexProcessCheck(int lastIndex, int numbersSize){
    if(lastIndex == numbersSize -1){
        std::cout << "Processed all numbers" << std::endl;
    }
    else if(lastIndex > (numbersSize -1) / 2 ){
        std::cout << "Almost made it all the way" << std::endl;
    }
    else{
         std::cout << "Didn't even get half way" << std::endl;
    }
}



int sumVector(std::vector<int> numbers){
    int numberSum = 0;
    int numberIterator = 0;
    while (numberSum % 2 == 0 && numberIterator < numbers.size() - 1) {
        numberSum += numbers.at(numberIterator);
        numberIterator++;
    }
    return numberSum;
}

int promptAnswerSort(char answer){
    switch(answer){
    case 'y':
        std::cout << "You said Yes, continuing execution." << std::endl;
        break;
    case 'Y':
        std::cout << "You said Yes, continuing execution." << std::endl;
        break;
    case 'n':
        std::cout << "You said No, quitting now." << std::endl;
        return 0;
    case 'N':
        std::cout << "You said No, quitting now." << std::endl;
        return 0;
    default:
        std::cout << "You entered an invalid option. Terminating with error" << std::endl;
        return 1;
    }
    return 2;
}

char promptAnswer(){
    std::cout << "Would you like to begin: (y/n)" << std::endl;
    char beginAnswer;
    std::cin >> beginAnswer;
    return beginAnswer;
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

std::vector<int> generateNumbersVector(){
    std::vector<int> numbers{};
    for(int i = 0; i < 10; i++){
        numbers.push_back(getRandom() % 100);
    }
    return numbers;
}

void printVectorElements(std::vector<int> numbers){
    std::cout << "The numbers are: " << std::endl;
    for(int i : numbers){
        std::cout << i << std::endl;
    }
}


