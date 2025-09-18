#include <iostream>
using namespace std;

int main()
{
    int a = 3;      // Regular integer variable
    int *b;         // Pointer variable that can store address of an integer
    b = &a;         // Storing address of 'a' in pointer 'b'

    cout << "The address of a is " << &a << endl;  // Shows memory address of 'a'
    cout << "The address of a is " << b << endl;   // Shows same address through pointer 'b'

    cout << "The value at address b is " << *b << endl;

    // Pointer to pointer
    int **c = &b;   // 'c' is a pointer that stores address of pointer 'b'
    cout << "The address of b is " << &b << endl;    // Address of pointer 'b'
    cout << "The address of b is " << c << endl;     // Same address through 'c'
    cout << "The value at address c is " << *c << endl;      // Address of 'a'
    cout << "The value at address value_at(value_at(c)) is " << **c << endl;  // Value 3

    return 0;
}
