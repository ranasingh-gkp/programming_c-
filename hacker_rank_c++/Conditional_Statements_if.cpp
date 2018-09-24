#include <sstream>
#include <iomanip>
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    cin >> n;
    if(n>=1 && n<=9){
        if(n==1)
            cout << "lowercase is: one" << endl;
        else if(n==2)
            cout << "lowercase is: two" << endl;
        else  if(n==3)
            cout << "lowercase is: three" << endl;
        else if(n==4)
            cout << "lowkercase is: four" << endl;
        else  if(n==5)
            cout << "lowercase is: five" << endl;
        else if(n==6)
            cout << "lowercase is: six" << endl;
        else if(n==7)
            cout << "lowercase is: seven" << endl;
        else if(n==8)
            cout << "lowercase is: eight" << endl;
        else if(n==9)
            cout << "lowercase is: nine" << endl;
        }
    
else {

  cout << "greater than 9" << endl;
}
return 0;
}
