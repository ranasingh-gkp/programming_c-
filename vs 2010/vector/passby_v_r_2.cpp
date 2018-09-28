# include <iostream>

#include <string>
using namespace std;
//function : datatype namefunction(){}

// Function declearation
void askuser(int&, string&);
void calculateoutcome(int, string);

int main(){
	int score;
	string name;
	askuser(score, name);
	calculateoutcome(score, name);
	
	return 0;
}

void askuser(int& newscore, string& newname){
	cout << "please type your name";
	cin >> newname;
	cout << " enter your score" ;
	cin >> newscore;
	
	
}

void calculateoutcome(int newscore, string newname){
	if(newscore>50){
		cout << " you did not fail" << endl;
	}
	else
	{
		cout << " you fail" << newname << endl;
	}
}


