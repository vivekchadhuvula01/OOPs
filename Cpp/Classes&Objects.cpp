#include <iostream>
using namespace std;

class Person /*create a class */
{
public:
    string name;
    int age;

    void greet()
    {
        cout << "hello " << name << endl;
    }
};

class Employee
{
private:
    string name;
    float annualPackage;

public:
    /* constructor*/
    Employee(string name, float annualpkg)
    {
        this->annualPackage = annualpkg;
        this->name = name;
    }

    /* getter functions*/
    string getName() { return name; }
    float getAnnualPackage() { return annualPackage; }

    /* setter functions*/
    void setName(string name) { this->name = name; }
    void setAnnualPackage(float pkg) { this->annualPackage = pkg; }

    void displayDetails()
    {
        cout << "Employee name: " << name << endl;
        cout << "Employee salary: " << annualPackage << endl;
    }
};

int main()
{
    Person p1; /* create an object */

    p1.name = "Adam"; /* assign values*/
    p1.age = 23;

    p1.greet();

    Employee emp(p1.name, 12.00f);

    cout << emp.getAnnualPackage() << endl;
    cout << emp.getName() << endl;

    emp.displayDetails();

    emp.setAnnualPackage(13.000f);
    emp.setName("AdamOne");

    emp.displayDetails();
    return 0;
}
