#include <iostream>
using namespace std;

int main()
{
    // Basic example
    int a = 4;
    int *ptr = &a;
    cout << "The value of a is: " << *(ptr) << endl;

    // new keyword
    float *p = new float(40);
    cout << "The value at address p is: " << *(p) << endl;

    int *arr = new int[3];
    cout << "The value of arr[0]: " << arr[0] << endl;
    cout << "The value of arr[1]: " << arr[1] << endl;
    cout << "The value of arr[2]: " << arr[2] << endl;
    return 0;
}