#ifndef PIEFACTORY_H
#define PIEFACTORY_H
#include <string>
#include <applepie.h>
#include <apricotpie.h>
#include <raspberrypie.h>


class PieFactory
{
public:
    PieFactory();
    ApplePie createApplePie();
    ApricotPie createApricotPie();
    RaspberryPie createRaspberryPie();
};

#endif // PIEFACTORY_H
