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
    int selection = 0;
    printf("Enter a choice: \n1. ApplePie\n2. RaspberryPie\n3. ApricotPie\n");
    scanf("%d", &selection);

    Pie* pieptr = NULL;
    if (selection == 1)
        pieptr = new ApplePie();
    else if (selection == 2)
        pieptr = new RaspberryPie();
    else
        pieptr = new ApricotPie();

    printf("%s", pieptr->description().c_str());

    return 0;
}

