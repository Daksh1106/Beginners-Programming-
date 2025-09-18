#include <iostream>

using namespace std;

int c = 45;

int main()
{
    // *************Build in Data types****************
    int a, b, c;
    cout << "Enter the value of a:" << endl;
    cin >> a;
    cout << "Enter the value of b:" << endl;
    cin >> b;
    c = a + b;
    cout << "The sum is: " << c << endl;
    cout << "The global c is: " << ::c;

    // ************* Float, double and long double Literals****************
    float d = 34.4F;
    long double e = 34.4L;
    cout << "\n\nThe size of 34.4 is: " << sizeof(34.4) << endl;  
    cout << "The size of 34.4f is: " << sizeof(34.4f) << endl;  
    cout << "The size of 34.4F is: " << sizeof(34.4F) << endl;
    cout << "The size of 34.4l is: " << sizeof(34.4l) << endl;  
    cout << "The size of 34.4L is: " << sizeof(34.4L) << endl;
    cout << "The value of d is: " << d << endl;
    cout << "The value of e is: " << e;
    /*  
    Line 22->No suffix so it is treated as double so its size according to this laptop is "8 bytes".
    Line 23 and 24->'f' & 'F' suffix created a long double so its size according to this laptop is "4 bytes".
    Line 25 and 26->'l' & 'L' suffix created a long double so its size according to this laptop is "12 bytes".
    If we change the '34.4' to anyother value, there will be no change in output.
    */

    // *************Reference Variables****************
    float x = 455;
    float &y = x;
    cout << x << endl;
    cout << y << endl;

    // *************Typecasting****************
    int g = 45;
    float h = 45.46;
    cout << "\nThe value of g is: " << (float)g << endl;
    cout << "The value of g is: " << float(g) << endl; // Line 41 and 42 will give the same output, hence they are called typecasting.

    cout << "\nThe value of h is: " << (int)h << endl;
    cout << "The value of h is: " << int(h) << endl; // Line 44 and 45 will give the same output, hence they are called typecasting.

    int k = int(h);

    cout << "\nThe expression is: " << g + h << endl;
    cout << "The expression is: " << g + int(h) << endl;
    cout << "The expression is: " << g + (int)h << endl;

    return 0;
}