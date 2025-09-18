#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;
    public:
        void setId(void)
        {
            cout<<"Enter the ID of Emplyee";
            cin>>id;
        }
        void getId(void)
        {
            salary=122;
            cout<<"The ID of this Employee is "<<id<<endl;
        }
};

int main()
{
    Employee JMV[5];
    for (int i = 0; i < 4; i++)
    {
        JMV[i].setId();
        JMV[i].getId();
    }
return 0;
}