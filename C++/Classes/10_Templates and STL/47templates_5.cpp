#include <iostream>
using namespace std;

template <class T>
class Daksh
{
public:
    T data;
    Daksh(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Daksh<T>::display()
{
    cout << data;
}

void func(int a)
{
    cout << "\n\nI am first func() " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "\nI am templatised func() " << a << endl;
}

template <class T>
void func1(T a)
{
    cout << "\nI am templatised func() " << a << endl;
}

int main()
{
    Daksh<float> h(5.7635);
    cout << h.data << endl;
    h.display();
    cout << endl
         << endl;

    Daksh<char> k('M');
    cout << k.data << endl;
    k.display();
    cout << endl
         << endl;

    Daksh<int> r(47);
    cout << r.data << endl;
    r.display();

    func(4); // Exact match takes the highest priority
    func1(4);

    return 0;
}