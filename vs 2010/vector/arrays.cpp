# include <iostream>

#include <string>
using namespace std;
//function : datatype namefunction(){}



const int CAPACITY=5;

int main() {
	
	string colors[CAPACITY];
	int i=0;
	string input;
	int numofelement=0;
	cout << "type in colors you want (-1 to stop):";
	cin >> input;
	while((input != "-1") && (i<CAPACITY)){
		numofelement++;
		colors[i]=input;
		i++;
		cin >> input;
		
	}
	for (int j=0;j<numofelement;j++){
		cout << "colors" << (j+i) << " "<< colors[j] << endl;
	}


	return 0;
	
 
}







