//Reducing Walls
//https://practice.geeksforgeeks.org/problems/reducing-walls/0
#include <iostream>

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cout << " please enter testpass:";
	cin>>t;
	while(t>0)
	{
	    int n,k;
	    cout << " please enter dimension:";
	    cin>>n;
	    cout << " please enter max height:";
	    cin >>k;
	    int a[n];
	    cout << " please enter element of array:";
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
            if(a[i]>k){
                int power = (a[i]/k);
                sum+=power;
            }
            else
                continue;
	    }
	    cout << " no of time power use is :  " << sum;



	}
	t--;
	 return 0;
}


