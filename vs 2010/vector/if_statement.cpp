# include <iostream>;

using namespace std;
int main() {
	int score;
	cout << "please type i your test score";
	cin >> score;
	if (score>=90){
		cout << "you got Ai" << endl;
	}
	else if (score>=80){
		cout << "you got bi" << endl;
	}
	else if (score>=70){
		cout << "you got ci" << endl;
	}
	else {
		cout << "you fail" << endl;
	}
	return 0;
}

