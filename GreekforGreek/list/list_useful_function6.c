// C++ code to demonstrate the working of pop_front()
// and pop_back()

#include<iostream>
#include<list> // for list operations
using namespace std;

int main()
{
	// initializing list of integers
	list<int> list1={10,15,20,25,30,35};

	// printing original list
	cout << "The original list is : ";
	for (list<int>::iterator i=list1.begin(); i!=list1.end(); i++)
	cout << *i << " ";

	cout << endl;

	// using pop_front() to erase first element of list
	// pops 10
	list1.pop_front();

	// list after deleting first element
	cout << "The list after deleting first element using pop_front() : ";
	for (list<int>::iterator i=list1.begin(); i!=list1.end(); i++)
	cout << *i << " ";

	cout << endl;

	// using pop_back() to erase last element of list
	// pops 35
	list1.pop_back();

	// list after deleting last element
	cout << "The list after deleting last element using pop_back() : ";
	for (list<int>::iterator i=list1.begin(); i!=list1.end(); i++)
	cout << *i << " ";

	cout << endl;

}
