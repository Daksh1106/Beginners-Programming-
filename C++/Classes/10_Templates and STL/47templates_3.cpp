#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float, class T3 = char>
class Daksh
{
public:
    T1 a;
    T2 b;
    T3 c;
    Daksh(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
        cout << "Value of c: " << c << endl;
    }
};
int main()
{
    Daksh<> d(4, 6.4, 'M');
    d.display();

    cout << endl;

    Daksh<float, char, char> k(1.4, 'M', 'B');
    k.display();

    return 0;
}