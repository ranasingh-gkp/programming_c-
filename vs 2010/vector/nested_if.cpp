# include <iostream>
#include <string>
using namespace std;

int main() {
	int first;
	cout << "type something";
	cin >> first;
	
	if (first>5){
		 if (first < 10){
		 	cout << endl << " perfect" << endl;
		 }
		 else {
		 	cout << endl << " too high " << endl;
		 }
		 cout << endl << " after nested if statement" << endl;
	}



	return 0;
}
