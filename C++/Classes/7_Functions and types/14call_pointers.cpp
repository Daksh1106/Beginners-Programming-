#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

/*
This will not swap a and b.
void sawp(int a, int b)
{
    int temp = a; // temp = 4, a = 4, b = 5
    a = b;
    b = temp;
}
*/

void swap(int *a, int *b)
{
    int temp = *a; 
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 4, y = 5;
    cout << "The sum of x is " << x << " and the value of y is " << y << endl;
    swap(&x, &y); // swap(a, b); // This will not swap a and b.
    cout << "The sum of x is " << x << " and the value of y is " << y << endl;
    return 0;
}