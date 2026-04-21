#include <iostream>
using namespace std;

// Pure Abstract Class acting as an Interface
class Printable
{
public:
    virtual void print() = 0; // pure virtual function
    virtual void scan() = 0;  // pure virtual function

    // Virtual destructor is a good practice for base classes
    virtual ~Printable() {}
};

// Derived class must implement all functions
class Document : public Printable
{
public:
    void print() override
    {
        cout << "Printing document..." << endl;
    }
    void scan() override
    {
        cout << "Scanning document..." << endl;
    }
};

// Another derived class implementing the same interface
class Photo : public Printable
{
public:
    void print() override
    {
        cout << "Printing photo..." << endl;
    }
    void scan() override
    {
        cout << "Scanning photo..." << endl;
    }
};

int main()
{
    // Base class pointer pointing to derived objects
    Printable *p1 = new Document();
    Printable *p2 = new Photo();

    // Call interface functions - runtime polymorphism
    p1->print();
    p1->scan();

    p2->print();
    p2->scan();

    // Free memory
    delete p1;
    delete p2;

    return 0;
}