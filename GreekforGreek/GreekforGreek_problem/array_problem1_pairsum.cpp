//Pair with given sum in a sorted array
//https://practice.geeksforgeeks.org/problems/pair-with-given-sum-in-a-sorted-array/0

#include<iostream>
#include <stdio.h>


using namespace std;
int main() {
	int t;
	cout << "enter the testcase:";
	cin>>t;
	while(t--){
	    long long int n,a[100000],sum,i,j;
	    int temp = 0;
	    cout << "enter the size of array:";
	    cin>>n;
	    cout << "enter the array element:";
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	    cout << "enter the sum:";
	    cin>>sum;
        i=0;j=n-1;
        while(i<j){
            if(a[i]+a[j] == sum){
	                cout<<a[i]<<" "<<a[j]<<" "<<sum<<endl;
	                temp = 1;
	                i++;
	                j--;

	    }
	    else if(a[i]+a[j]<sum)
            i++;
            else
            j--;
        }

	    if(temp == 0){
	        cout<<"-1"<<endl;
	    }

	}
	return 0;
}
