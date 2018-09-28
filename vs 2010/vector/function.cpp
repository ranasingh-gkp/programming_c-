# include <iostream>

#include <string>
using namespace std;
//function : datatype namefunction(){}

// Function declearation
void welcomemessage();

int calculatenum();
// calculate multiple two num

int main() {
	welcomemessage();
	int prod = calculatenum();
	cout << prod << endl;
	return 0;
	
 
}

// function definition
void welcomemessage() {
	cout << "this is my first function" << endl;
}
int calculatenum(){
	int x=5;
	int y=6;
	return (x*y);
	
}
