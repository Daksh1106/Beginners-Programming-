#include <iostream>
using namespace std;

// Base class.
class Employee
{

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Dervied class
class Programmer : public Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee daksh(1), aarushi(2);
    cout << daksh.salary << endl;
    cout << aarushi.salary << endl;
    Programmer skillF(69);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();
    return 0;
}