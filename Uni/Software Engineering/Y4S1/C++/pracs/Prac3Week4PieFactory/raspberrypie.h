#ifndef RASPBERRYPIE_H
#define RASPBERRYPIE_H

#include <pie.h>


class RaspberryPie : public Pie
{
public:
    RaspberryPie();
    RaspberryPie(const RaspberryPie&) = default;
    virtual ~RaspberryPie() = default;

    virtual std::string description() const override;
    virtual std::string tastiness() const override;
};

#endif // RASPBERRYPIE_H
