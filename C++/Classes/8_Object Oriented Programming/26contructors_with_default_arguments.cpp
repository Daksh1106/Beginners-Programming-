#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;

public:
    Simple(int a, int b = 9)
    {
        data1 = a;
        data2 = b;
    }
    void printData();
};

void Simple::printData()
{
    cout << "The value of data1 and data2 is " << data1 << " and " << data2 << endl;
}

int main()
{
    Simple s1(2);
    Simple s2(1, 7);
    s1.printData();
    s2.printData();
    return 0;
}