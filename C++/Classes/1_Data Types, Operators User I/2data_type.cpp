#include <iostream>

using namespace std;

int glo = 6;

void sum()
{
    int a;
    cout << glo;
}

int main()
{
    int glo = 9;
    glo = 71;
    int a = 14, b = 16;
    float pi = 3.14;
    char c = 'm';
    bool omg = true;
    sum();
    cout << "\nHello!!!\nValue of a:" << a << "\nValue of b:" << b;
    cout << "\nThe value of pi is: " << pi;
    cout << "\nThe value of c is: " << c;
    cout << "\n"<< glo << omg;
    return 0;
}
