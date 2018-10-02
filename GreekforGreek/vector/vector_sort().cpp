//https://www.geeksforgeeks.org/sorting-a-vector-in-c/
// C++ program to sort a vector in non-decreasing
// order.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{ 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };

    sort(v.begin(), v.end());

    cout << "Sorted \n";
    for (auto x : v)
        cout << x << " ";

    sort(v.begin(), v.end(), greater<int>());

    cout << endl << "Sorted greater first \n";
    for (auto x : v)
        cout << x << " ";

    return 0;
}
