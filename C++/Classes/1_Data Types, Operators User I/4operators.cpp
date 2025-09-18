#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a = 4, b = 9, x;
    cout << "Operators in C++" << endl;
    cout << "Following are the types of OPERATORS in C++" << endl;

    //  Arithmetic operators
    cout << "===========================================" << endl;
    cout << "Following are the ARITHMETIC OPERATORS in C++" << endl;
    cout << "The value of a-b is: " << a - b << endl;
    cout << "The value of a+b is: " << a + b << endl;
    cout << "The value of a*b is: " << a * b << endl;
    cout << "The value of a/b is: " << a / b << endl;
    cout << "The value of a%b is: " << a % b << endl;
    cout << "The value of a++ is: " << a++ << endl;
    cout << "The value of a-- is: " << a-- << endl;
    cout << "The value of ++a is: " << ++a << endl;
    cout << "The value of --a is: " << --a << endl;

    cout << "\n";
    // Comparison operators
    cout << "Following are the COMPARISON OPERATORS in C++" << endl;
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;

    cout << "\n";
    // Logical operators
    cout << "Following are the LOGICAl OPERATORS in C++" << endl;
    cout << "The value of this logical and operator ((a==b) && (a<b)) is: " << ((a == b) && (a < b)) << endl;
    cout << "The value of this logical or operator ((a==b) || (a<b)) is: " << ((a == b) || (a < b)) << endl;
    cout << "The value of this logical not operator (!(a==b)) is: " << (!(a == b)) << endl;

    cout << "\n";
    // Assignment operators
    cout << "Following are the ASSIGNMENT OPERATORS in C++" << endl;
    x = 10;  
    cout << "Initially x = " << x << endl;
    cout << "The value of a = x is: " << (a = x) << endl;
    cout << "The value of a += x is: " << (a += x) << endl;
    cout << "The value of a -= x is: " << (a -= x) << endl;
    cout << "The value of a *= x is: " << (a *= x) << endl;
    cout << "The value of a /= x is: " << (a /= x) << endl;
    cout << "The value of a %= x is: " << (a %= x) << endl;
    cout << "The value of a &= x is: " << (a &= x) << endl;  
    cout << "The value of a |= x is: " << (a |= x) << endl;
    cout << "The value of a ^= x is: " << (a ^= x) << endl;
    cout << "The value of a >>= 2 is: " << (a >>= 2) << endl;  
    cout << "The value of a <<= 2 is: " << (a <<= 2) << endl;

    return 0;
}