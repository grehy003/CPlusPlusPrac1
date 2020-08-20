#include "piefactory.h"

PieFactory::PieFactory()
{

}

ApplePie PieFactory::createApplePie(){
    return ApplePie();
}

ApricotPie PieFactory::createApricotPie(){
    return ApricotPie();
}

RaspberryPie PieFactory::createRaspberryPie(){
    return RaspberryPie();
}
