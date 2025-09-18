#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap["Daksh"] = 97;
    marksMap["John"] = 79;
    marksMap["Mike"] = 82;

    marksMap.insert({{"Sam", 65}, {"Ben", 87}});
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }
    cout << "The size is: " << marksMap.size() << endl;
    cout << "The Maximum size is: " << marksMap.max_size() << endl;
    cout << "The empty's return value is: " << marksMap.empty() << endl;
    return 0;
}