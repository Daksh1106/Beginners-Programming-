#include <iostream>
using namespace std;

int main()
{
    // Array example
    int marks[4] = {23, 49, 69, 80};

    int mathMarks[4];
    mathMarks[0] = 123;
    mathMarks[1] = 452;
    mathMarks[2] = 561;
    mathMarks[3] = 869;

    cout << "These are math marks" << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;

    cout << "These are marks" << endl;
    marks[2] = 3421; // You can change the value of an array like this.
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    // Using loops
    cout << "These are marks(using loops); " << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks " << i << " is " << marks[i] << endl;
    }

    return 0;
}