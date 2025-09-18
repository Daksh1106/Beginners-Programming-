#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void get_data()
    {
        cout << "The real part is: " << real << endl;
        cout << "The imaginary part is: " << imaginary << endl;
    }
    void set_data(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;

    // (*ptr).set_data(1, 54);
    ptr->set_data(1, 54); // Both are same thing but written in different way. Hence this is called ARROW OPERATOR

    //(*ptr).get_data();
    ptr->get_data();

    // Array of objects
    Complex *ptr1 = new Complex[4];
    ptr1->set_data(9, 4);
    ptr1->get_data();
    return 0;
}