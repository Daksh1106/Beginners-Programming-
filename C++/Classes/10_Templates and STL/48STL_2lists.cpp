#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // List of 0 length.
    list1.push_back(5);
    list1.push_back(98);
    list1.push_back(1);
    list1.push_back(21);
    list1.push_back(13);
    display(list1);
    cout << "Reversing the elements: ";
    list1.reverse(); // Reverses the direction of elements.
    display(list1);
    list1.pop_back(); // Removes element from back.
    display(list1);
    list1.pop_front(); // Removes element from front.
    display(list1);
    list1.remove(9); // Removes the element you have choosen from any part, use must mention the number u want to remove.
    display(list1);
    list1.sort(); // Sorting the list in ascending order.
    display(list1);

    list<int> list2(3); // Empty list of size 3.
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 156;
    iter++;
    *iter = 23;
    iter++;
    display(list2);
    list2.sort(); // Sorting the list in ascending order.
    display(list2);

    list1.merge(list2);
    cout << "List 1 after merging: ";
    display(list1);

    return 0;
}