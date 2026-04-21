#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    void type()
    {
        cout << "This fun is used to tell about car type" << endl;
    }
};

class Tiago : public Car
{
public:
    void type()
    {
        cout << "Hatchback" << endl;
    }
};

class Safari : public Car
{
public:
    void type()
    {
        cout << "SUV" << endl;
    }
};

class Hondacity : public Car
{
public:
    void type()
    {
        cout << "Sedan" << endl;
    }
};

int main()
{
    Tiago t;
    t.type();

    Safari s;
    s.type();

    Hondacity h;
    h.type();
    return 0;
}