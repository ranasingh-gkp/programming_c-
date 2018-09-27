# include <iostream>;

using namespace std;
int main() {
	int score;
	cout << "please type i your test score";
	cin >> score;
	// if ((score>=90) || (score <=200))
	// if ((score>=90) && !(score ==200))
	if ((score>=90) && (score <=200)){
		cout << "you got Ai" << endl;
	}

	else {
		cout << "you fail" << endl;
	}
	return 0;
}




