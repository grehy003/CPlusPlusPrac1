#ifndef MYNAME_H
#define MYNAME_H
#include <string>
#include <iostream>

class MyName
{
public:
    //Equals sign sets a default value of "Jack", another value can still be passed in instead
    MyName(const std::string &first, const std::string &last, const std::string &middle = "Jack");
    MyName(const MyName &other) = default;

    void show(std::ostream &output);
    static MyName readFrom(std::istream &input);
private:
    std::string _first;
    std::string _last;
    std::string _middle;
};

#endif // MYNAME_H
