#include <stdio.h>
#include <string>

class Pie //Pie base class
{
public:
    virtual std::string description() = 0; // Pure virutal Function
};

class ApplePie : public Pie // ApplePie is derived from Pie class
{
public:
    std::string description()
    {
        return "This is the result of ApplePie class\n";
    }
};

class RaspberryPie : public Pie // RaspberryPie is derived from Pie class
{
public:
    std::string description()
    {
        return "This is the result of RaspberryPie class\n";
    }
};

class ApricotPie : public Pie // ApricotPie is derived from Pie class
{
public:
    std::string description()
    {
        return "This is the result of ApricotPie class\n";
    }
};

int main()
{
    ApplePie p1;
    printf("%s", p1.description().c_str());

    RaspberryPie p2;
    printf("%s", p2.description().c_str());

    ApricotPie p3;
    printf("%s", p3.description().c_str());

    return 0;
}

