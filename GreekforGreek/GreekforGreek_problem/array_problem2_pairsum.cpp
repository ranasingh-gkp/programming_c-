//Pair with given sum in a sorted array
//https://practice.geeksforgeeks.org/problems/pair-with-given-sum-in-a-sorted-array/0

#include<iostream>
#include <vector>
using namespace std;



void Pair(vector<int> arr, int n, int k){
   int begin = 0;
   int end = arr.size()-1;
   int isPair = false;
   while(begin < end){
       if(arr[begin] + arr[end] < k)
        begin++;
       else if (arr[begin] + arr[end] > k)
        end--;
       else{
           isPair = true;
           cout<<arr[begin]<<" "<<arr[end]<<" "<<k<<endl;
           begin++;
           end--;
       }
   }
   if(!isPair)
    cout<<"-1"<<endl;
}

int main() {
	//code
	int T, k, input;
	cin>>T;
	while(T--){
	    int n, k;
	    cin>>n;
	    vector<int> arr;
	    for(int i = 0; i < n; i++){
	        cin>>input;
	        arr.push_back(input);
	    }
	    cin>>k;
	    Pair(arr, n, k);
	}
	return 0;
}
