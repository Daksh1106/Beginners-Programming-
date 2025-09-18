#include <iostream>
using namespace std;

int main()
{
    // Array and pointers
    int marks[] = {99, 100, 38};
    int *p = marks;
    cout << "The value of marks[0] is " << *p << endl;
    cout << "The value of marks[1] is " << *(p + 1) << endl;
    cout << "The value of marks[2] is " << *(p + 2) << endl;
    return 0;
}