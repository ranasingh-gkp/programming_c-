# include <iostream>
#include <string>
using namespace std;

int main() {
	int first;
	cout << "type something";
	cin >> first;
	
	int second;
	cout << "type something";
	cin >> second;
	int i =0;
	while (i<5){
		cout << i << " " << first << endl;
		for(int j=0;j<5;j++){		
		cout << j << " " << second << endl;
	}
	i++;
	}
	

	return 0;
}


