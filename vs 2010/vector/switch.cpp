# include <iostream>

using namespace std;
int main() {
	char grade;
	cout << "please type i your grade";
	cin >> grade;
	switch(grade){
		case 'A': 
		case 'a':
			cout << endl << "you are very ready for this course"<< endl;
			break;
		case 'B':
			cout << endl << "you are very ready for this course" << endl;
			break;
		case 'C':
			cout << endl << "you are very ready for this course" << endl;
			break;
		default:
		cout << endl << "you are not ready for this course" << endl;	
		
	}
	

	return 0;
}
