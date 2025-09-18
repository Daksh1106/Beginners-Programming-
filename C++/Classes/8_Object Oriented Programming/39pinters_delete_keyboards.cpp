#include <iostream>
using namespace std;

int main()
{
    // Basic example
    int a = 4;
    int *ptr = &a;
    cout << "The value of a is: " << *(ptr) << endl;

    // delete keyword
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete[] arr;
    cout << "The value of arr[0]: " << arr[0] << endl;
    cout << "The value of arr[1]: " << arr[1] << endl;
    cout << "The value of arr[2]: " << arr[2] << endl;

    return 0;
}