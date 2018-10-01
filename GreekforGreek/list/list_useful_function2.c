// C++ code to demonstrate the working of
// merge() and remove_if()
#include<iostream>
#include<list> // for list functions
using namespace std;
int main()
{
	// Initializing list1
	list<int> gqlist1 = {1, 2, 3};

	// Initializing list2
	list<int> gqlist2 = {2, 4, 6};

	// using merge() to merge list1 with list2
	gqlist1.merge(gqlist2);
	//merge(list2) :- This function is used to merge list2 with list1. If both the lists are in sorted order, then the resulting list is also sorted.

	// Displaying list elements
	cout << "list1 after merge operation is : ";
	for (int &x : gqlist1) cout << x << " ";
	cout << endl;

	// using remove_if() to remove odd elements
	// removes 1 and 3
	gqlist1.remove_if([](int x){return x%2!=0;});
	//remove_if(condition) :- This function removes the element from list on the basis of condition given in its argument.

	// Displaying list elements
	cout << "list1 after remove_if operation is : ";
	for (int &x : gqlist1) cout << x << " ";
	cout << endl;

	return 0;

}
