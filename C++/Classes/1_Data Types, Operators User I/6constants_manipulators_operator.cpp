#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a = 34;
    cout << "The value of a was: " << a << endl;
    a = 45;
    cout << "The value of a is: " << a << endl
         << endl;

    // Constants in C++
    const int b = 3;
    cout << "The value of b was: " << b << endl;
    // b = 45; // You will get an error because b is a constant
    cout << "The value of b is: " << b << endl
         << endl;

    // Manipulators in C++
    int c = 3, d = 78, e = 1233;
    cout << "The value of c without setw is: " << c << endl;
    cout << "The value of c is:" << setw(4) << c << endl;
    cout << "The value of d without setw is:" << d << endl;
    cout << "The value of d is:" << setw(4) << d << endl;
    cout << "The value of e without setw is:" << e << endl;
    cout << "The value of e is:" << setw(4) << e << endl
         << endl;

    double pi = 3.14159265359;
    cout << "Default precision: " << pi << endl;
    cout << "With precision(4): " << setprecision(4) << pi << endl;
    cout << "With precision(8): " << setprecision(8) << pi << endl;

    int num = 27;
    cout << "\nNumber in different bases:\n";
    cout << "Decimal (base 10): " << setbase(10) << num << endl;
    cout << "Octal (base 8): " << setbase(8) << num << endl;
    cout << "Hexadecimal (base 16): " << setbase(16) << num << endl;
    cout << setbase(10);

    // Operator Precedence
    int f = 3, g = 4;
    // int h = (f*5)+g;
    int h = ((((f * 5) + g) - 45) + 87);
    cout << h;
    return 0;
}
