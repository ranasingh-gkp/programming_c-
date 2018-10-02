//Maximum Perimeter of Triangle from array
//https://practice.geeksforgeeks.org/problems/maximum-perimeter-of-triangle-from-array/0
#include <iostream>

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cout << " please enter testpass:";
	cin>>t;
	while(t>0)
	{
	    int n;
	    cout << " please enter dimension:";
	    cin>>n;
	    int a[n],b[n];
	    cout << " please enter element of array:";
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    int f=1;
	    int k=0;


	    for(int i=0;i<n-2;i++){
            if(a[i]+a[i+1]>a[i+2]){
                    for(int j=0;j<n-2;j++){
                        b[j]=a[i]+a[i+1]+a[i+2];
                        k++;
                    }
                //cout << "perimeter of triangle formed by :" << a[i]<< a[i+1]<< "&" << a[i+2]<< " is: " <<a[i]+a[i+1]+a[i+2] << endl;
                f=0;
            }

	    }
	    int m=0;
	    if(f==1){
	    cout << " -1" << endl;
	    }
	    else{
            for(int j=0;j<k;j++){
                if( b[j]>m){
                    m=b[j];
                }
            }
            cout << m ;
	    }



	}
	t--;
	 return 0;
}

