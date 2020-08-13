#include <QCoreApplication>
#include <iostream>
#include <string>
#include <piefactory.h>

int main()
{
    std::cout << "Which type of pie would you like? Enter 1 for Apple, 2 For Apricot or 3 for Raspberry ";
    int choice;
    std::cin >> choice;
    PieFactory factory;

    switch(choice) {
    case 1:{
            std::cout << factory.createApplePie().Description();
            break;
        }
    case 2:{
            std::cout << factory.createApricotPie().Description();
            break;
        }
    case 3: {
            std::cout << factory.createRaspberryPie().Description();
            break;
        }
    default:{
            std::cout << "Please enter a number from 1 to 3";
        }
    }

    return 0;
}
