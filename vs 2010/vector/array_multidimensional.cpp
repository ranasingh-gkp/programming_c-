# include <iostream>

#include <string>
using namespace std;
const int row =4;
const int col=3;

// function decleration
void fillscore(int[row][col]);// not necessary to put value

void printscore(int[row][col]);
int main() {
	
	int score[row][col];
	fillscore(score);
	printscore(score);;	

	return 0;
	
 
}
// function definition
void fillscore(int newscore[row][col]){
	int score;
	for (int i=0;i<row;i++){
		cout << "enter score for test :" << (i+1) << ":";
		for (int j=0;j<col;j++){
			cin >> score;
			newscore[i][j]=score;
		}
		cout << endl;
	}
}

void printscore(int newscore[row][col]){
	for (int i=0;i<col;i++){
		cout <<  endl << "student" << (i+1) << "score" ;
		for (int j=0;j<row; j++){
			cout << newscore[j][i] << " ";
		}
	}
	
	
	
	
}
