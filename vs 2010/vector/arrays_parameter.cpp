# include <iostream>

#include <string>
using namespace std;
//function : datatype namefunction(){}


void fillarray(int[], int&);

void printarray( const int[], int);
const int CAPACITY=39;

int main() {
	int score[CAPACITY];
	int numofelement=0;
	
	fillarray(score, numofelement);
	printarray(score, numofelement);


	return 0;
	
 
}

void fillarray(int newscore[], int& numofelement){  //& because its changing


	int i=0;
	int score;
	cout << "type score of element(-1 to stop:)";
	cin >> score;
	
	while((score !=-1) && (i<CAPACITY)){
		numofelement++;
		newscore[i]=score;
		i++;
		cin >> score;
		
	}
}
void printarray(const int newscore[], int numofelement) {
	cout << "scores:";
	for(int i=0;i<numofelement;i++){
		cout << newscore[i] << " ";
	}
}





