#include <iostream>
using namespace std;

template <class T1, class T2, class T3>

class myClass
{
public:
    T1 data1;
    T2 data2;
    T3 data3;
    myClass(T1 a, T2 b, T3 c)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void display()
    {
        cout << this->data1 << endl
             << this->data2 << endl
             << this->data3 << endl;
    }
};

int main()
{
    myClass<int, char, float> obj(1, 'c', 3.7);
    obj.display();

    return 0;
}