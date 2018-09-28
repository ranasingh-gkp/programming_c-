# include <iostream>

#include <string>
using namespace std;
//function : datatype namefunction(){}

// Function declearation
void value(int);

void reference(int&);



int main() {
	int num1=5;
	value(num1);
	cout << num1 << endl;
	reference(num1);
	cout << num1 << endl;
	


	return 0;
	
 
}

// function definition
void value(int num1) {
	num1 +=5;
	
}

void reference(int& num1) {
	num1 +=5;
	
}




