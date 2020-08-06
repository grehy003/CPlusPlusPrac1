#include <iostream>
#include <chrono>
#include <thread>
#include "myfunctions.h"

int main()
{
    int yahtzeeCounter = 0;
    for(int i = 0; i < 5; i++){
         std::string roll = rollADie();
         std::cout << "Die Roll: " << roll << std::endl;
         if(roll == "Five"){
             yahtzeeCounter++;
         }

         //As the random number is generated via a time seed,
         //sleep is required to generate different numbers for each roll
         std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
    if(yahtzeeCounter == 4){
        std::cout << "YAHTZEE!" << std::endl;
    }

    return 0;
}
