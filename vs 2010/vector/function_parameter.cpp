# include <iostream>

#include <string>
using namespace std;
//function : datatype namefunction(){}

// Function declearation
void printmessage();

void printresult(int);

int calculatenum();
// calculate multiple two num

void addnum(int , int);
void subnum(int , int);

int main() {
	
	printmessage();
	int num1, num2;
	cout << " type two integer:" ;
	cin >> num1 >> num2;
	addnum(num1, num2);
	subnum(num1, num2);

	return 0;
	
 
}

// function definition
void printmessage() {
	cout << "math operation" << endl;
}

void addnum(int x, int y) {
	printresult(x+y);
	
}
void subnum(int x, int y){
	printresult(x-y);
}
void printresult(int total){
	cout << "total" << total <<  endl;
}




