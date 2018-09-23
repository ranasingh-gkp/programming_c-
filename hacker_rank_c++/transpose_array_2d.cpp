#include <cmath>

#include <cstdio>

#include <vector>

#include <iostream>

#include <algorithm>

using namespace std;
int main() {

    int i,j,p,q;
    
    cout << "enter the no of row:";
    cin >> p;
    cout << "enter the no of column:";
    cin >> q;
    int arr[p][q];
    for(i=0;i<p;i++){
    	
    	for(j=0;j<q;j++){
    		cin >> arr[i][j];
		}
	}
	
    for(i=0;i<q;i++){
    	
    	for(j=0;j<p;j++){
    		cout << arr[j][i] << "\t";
		}
		cout << endl;
	}
}
