#ifndef APPLEPIE_H
#define APPLEPIE_H

#include <pie.h>


class ApplePie : public Pie
{
public:
    ApplePie();
    ApplePie(const ApplePie&) = default;
    virtual ~ApplePie() = default;
    virtual std::string description() const override;
    virtual std::string tastiness() const override;
};

#endif // APPLEPIE_H
