#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the ID" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The ID of this Employee is " << id << " and this is Employee number " << count << endl;
    }

    static void getCount(void)
    {
        // cout<<id; // throws an error
        cout << "The value of count is " << count << endl;
    }
};

// Count is the static data member of class Employee
int Employee::count; // Default value is 0

int main()
{
    Employee daksh, aarushi, rahul;
    // daksh.id = 1;
    // daksh.count=1; // cannot do this as id and count are private

    daksh.setData();
    daksh.getData();
    Employee::getCount();

    aarushi.setData();
    aarushi.getData();
    Employee::getCount();

    rahul.setData();
    rahul.getData();
    Employee::getCount();

    return 0;
}
