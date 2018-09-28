# include <iostream>

#include <string>
using namespace std;
//function : datatype namefunction(){}

// Function declearation
void askusername(string&);



int askuserscore(); // return score so int
// calculate multiple two num

void print(string,int);

int main() {
	string name;
	askusername(name);
	print(name, askuserscore());


	return 0;
	
 
}

// function definition
void askusername(string& newname) {
	cout << "enter you name:  " ;
	cin >> newname ;
}
int askuserscore(){
	int score;
	cout << " enter credit score:  ";
	cin >> score;
	cout << endl;
	return score;
}

void print(string newname, int newscore) {
	if (newscore >=750){
		cout << endl << newname <<" you are in good standing:" << endl;
		
	}
	else if (newscore>=600){
		cout << endl << newname << " you are in questionable standing:" << endl;
	}
	else {
		cout << endl << newname << " you are not in good standing:" << endl;
	}
	
	
}





