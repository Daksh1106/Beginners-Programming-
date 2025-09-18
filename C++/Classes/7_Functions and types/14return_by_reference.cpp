#include <iostream>
using namespace std;

int &swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main()
{
    int x = 4, y = 5;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    swap(x, y) = 745;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    return 0;
}