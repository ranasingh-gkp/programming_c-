//Pattern-1
//https://practice.geeksforgeeks.org/problems/pattern-1/0/?ref=self
#include <iostream>

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cout << " please enter no of test_pass:";
	cin>>t;
	while(t>0)
	{
	    int i,j,n;
	    cout << "enter size: ";
	    cin >> n;
	    char ch ='A';
	    for(i=0;i<n;i++){
                for(j=0;j<n;j++){
            if(i==0 || i==n-1){
                for(j=0;j<n;j++){
                    cout << ch;
                    ch++;
                }
                }

            else
            if(j==0 || j==n-1){
                cout << ch;
                ch++;

            }
            else
                cout << '$';
	    }
	    cout << endl;
	    }

	    t--;
	}

	 return 0;
}


