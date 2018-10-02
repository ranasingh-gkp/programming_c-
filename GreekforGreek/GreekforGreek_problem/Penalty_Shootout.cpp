//The Penalty Shootout
//https://practice.geeksforgeeks.org/problems/the-penalty-shootout/0/?ref=self
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
	    cout << " please enter dimension of string:";
	    cin>>n;

	    string a[500];
	    cout << " please enter string element:";
	    int k=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];

	    }for(int i=0;i<n;i++){
	        if(a[i]=="2"){
                k++;
	        }
	        else
                continue;
	    }
	    cout << " no of goal is: "<< (k-1)<< endl;


	    t--;


	}

	 return 0;
}


