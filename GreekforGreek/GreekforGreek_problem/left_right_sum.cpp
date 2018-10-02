//Multiply left and right array sum
//https://practice.geeksforgeeks.org/problems/multiply-left-and-right-array-sum/0
#include <iostream>

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cout << " please enter no of test_pass:";
	cin>>t;
	while(t>0)
	{
	    int n;
	    cout << " please enter dimension:";
	    cin>>n;

	    int a[n];
	    cout << " please enter element of array:";
	    int sumleft=0,sumright=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for (int i=0;i<n;i++){
                if(i<(n/2)){
            sumleft=sumleft+a[i];
                }
                else{
                    sumright=sumright+a[i];
                }

	    }
	    cout << " multiplication of left & right sum is: " << (sumleft*sumright)<< endl<<sumleft<<endl;
	    t--;


	}

	 return 0;
}


