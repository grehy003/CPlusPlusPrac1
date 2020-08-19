#ifndef MYNAME_H
#define MYNAME_H
#include <string>
#include <iostream>

class MyName
{
public:

    MyName(const std::string &first, const std::string &last);
    MyName(const std::string &first, const std::string &middle, const std::string &last);
    MyName(const MyName &other) = default;

    void show(std::ostream &output);
    static MyName readFrom(std::istream &input);
private:
    std::string _first;
    std::string _middle;
    std::string _last;
};

#endif // MYNAME_H
