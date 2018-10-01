//Given n*n spaced integers of a 2-d Array.Task is to set every value in the matrix to 0 if that row or columns contains a 0
//https://practice.geeksforgeeks.org/problems/c-2-d-arrays-set-2/0

#include<iostream>
#include <stdio.h>


using namespace std;
int main(){
    int testcase;

    cout << "please enter testcase:";
    cin >> testcase;
    while (testcase>0){
        int n,i,j;
        cout << " please enter dimension of array:";
        cin >> n;
        int a[n][n],b[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>> a[i][j];
            b[i][j]=a[i][j];
        }

    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]==0){
            int k=0;
            while(k<n){
                b[i][k]=0;
                b[k][j]=0;
                k++;
            }


            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << b[i][j] << " " ;

        }
        cout << endl;
    }


    }
    testcase--;


	return 0;
}
