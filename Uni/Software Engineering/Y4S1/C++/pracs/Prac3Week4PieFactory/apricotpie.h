#ifndef APRICOTPIE_H
#define APRICOTPIE_H

#include <pie.h>


class ApricotPie : public Pie
{
public:
    ApricotPie();
    ApricotPie(const ApricotPie&) = default;
    virtual ~ApricotPie() = default;

    virtual std::string description() const override;
    virtual std::string tastiness() const override;
};

#endif // APRICOTPIE_H
