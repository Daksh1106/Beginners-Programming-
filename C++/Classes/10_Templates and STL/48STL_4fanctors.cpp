#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    // Function Objects(Functor): Function wrapped in a class so that it available like and object.
    int arr[] = {1, 23, 15, 98, 12, 69, 402};
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    sort(arr, arr + 5, greater<int>()); // Sort is used to arrange the elements in ascending order but using greater has arranged it in descending order.
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}