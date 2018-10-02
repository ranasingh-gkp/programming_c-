//https://www.geeksforgeeks.org/stdlistsort-c-stl/
// SORTING INTEGERS
// CPP program to illustrate
// Implementation of sort() function
#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
    // list declaration of integer type
    list<int> mylist{ 1, 5, 3, 2, 4 };


    // sort function
    mylist.sort();

    // printing the list after sort
    for (auto it = mylist.begin(); it != mylist.end(); ++it){
        cout << ' ' << *it;
    }
    cout << endl;

    // list declaration of string type
    list<string> mylist1{ "hi", "bye", "thanks" };
    // sort function
    mylist1.sort();

    // printing the list after sort
    for (auto it = mylist1.begin(); it != mylist1.end(); ++it)
        cout << ' ' << *it;
    return 0;
}
