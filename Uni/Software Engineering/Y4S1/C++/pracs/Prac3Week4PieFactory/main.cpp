#include <QCoreApplication>
#include<pie.h>
#include<string>
#include<iostream>
#include<piefactory.h>

int main()
{
    std::cout << "Let me know what type of pie you would like!" << std::endl;
    std::cout << "Enter 1 for Apple, 2 for Apricot or 3 for Raspberry" << std::endl;

    int choice;
    std::cin >> choice;
    PieFactory factory;

    switch(choice){
    case 1:
            std::cout << factory.createApplePie() << std::endl;
            break;
    case 2:
            std::cout << factory.createApricotPie() << std::endl;
            break;
    case 3:
            std::cout << factory.createRaspberryPie() << std::endl;
            break;
       default:
            std::cout << "Invalid choice, pick a number between 1 and 3" << std::endl;
       }

    return 0;
}


