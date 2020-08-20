#ifndef PIE_H
#define PIE_H
#include<string>
#include<iostream>


class Pie
{
public:
    Pie();
    Pie(const Pie& pie) = default;
    virtual std::string description() const = 0;
    virtual ~Pie() = default;
    virtual std::string tastiness() const;
    friend std::ostream & operator<<(std::ostream &out, const Pie &pie);
private:

};

#endif // PIE_H
