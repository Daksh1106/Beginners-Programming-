#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string st = "Daksh Keshri";
    // Opening files using constructor and writing it
    ofstream out("sample60.txt"); // Write operation
    out << st;

    return 0;
}
// Check Sample txt once you have run the code.
// You will see Daksh Keshri will be written in it.
