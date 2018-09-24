#include <iostream>
#include <cstdio>
using namespace std;
//You will be given two positive integers, and(a<=b), separated by a newline.
//https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem

int main() {
        int a,b;
    string represent[10] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> a >> b;
    for(int i=a; i<= b; i++)
    {
	
    if (i>9) {
        if (i%2==0)
            cout << "even" << endl;
        else 
		cout << "odd" << endl;        
    }
        else 
            cout << represent[i]<< endl;
        
  }
    return 0;
}
