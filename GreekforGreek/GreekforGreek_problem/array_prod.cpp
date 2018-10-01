//Product of array elements
//https://practice.geeksforgeeks.org/problems/product-of-array-element/1

#include<iostream>
#include <stdio.h>


using namespace std;
int main(){
    int testcase;

    cout << "please enter testcase:";
    cin >> testcase;
    while (testcase>0){
        int n;
        cout << "please enter array size:";
        cin >> n;
        int a[n];
        cout << "please enter array element:";
        for (int i=0;i<n;i++){
            cin >> a[i];
        }
        cout << endl;
        int prod = 1;
        int j=0;
        while(j<n){
                prod=prod*a[j];
                j++;

        }
        cout << endl;
        cout << " product of element is" << prod << endl;


    }
    testcase--;


	return 0;
}
