#include <iostream>
#include <string>
using namespace std;

/* Encapsulation is process of binding methods and data in an object*/

class Parameters
{
private:
    string parameterName;

public:
    string getName()
    {
        return parameterName;
    }

    void setName(string Name)
    {
        parameterName = Name;
    }
};

int main()
{
    Parameters param;
    param.setName("adam");

    cout << "name: " << param.getName() << endl;
    return 0;
}