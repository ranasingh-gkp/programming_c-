#include <iostream>
#include <vector>

using namespace std;
// function decaleration
void fillvector(vector<int>&); //pass by reference
void printvector(const vector<int>&);
void reverse(const vector<int>&);
void printeven(const vector<int>&);
void replace(vector<int>&);


int main(){
	vector<int> v;
	fillvector(v);
	printvector(v);
	reverse(v);
	printeven(v);
	replace(v);;
	
	return 0;
}


// function definition
void fillvector(vector<int>& v1){
	cout << " type list of number (-1 top stop)";
	int input;
	cin >> input;
	while (input !=-1){
		v1.push_back(input);
		cin >> input;
				
	}
	cout << endl;
	
}
void printvector(const vector<int>& v1){
	cout << "vector: ";
	for(unsigned int i =0 ; i<v1.size(); i++){
		cout << v1[i] << " ";
	}
	cout << endl;
}
void reverse(const vector<int>& v1){
	cout << "vector reversed";
	for (unsigned int i =v1.size(); i>0 ;i--){
		cout << v1[i-1]<<  " ";
	}
	cout << endl;
}

void printeven(const vector<int>& v1){
	for (unsigned int i=0; i< v1.size(); i++){
		if ((v1[i]%2)==0){
			cout << v1[i]<< " ";
		}
	}
	cout << endl;
}

void replace(vector<int>& v1){
	int old, replace;
	cout << "typr number with replace number:" ;
	cin >> old >> replace;
	for (unsigned int i =0; i< v1.size(); i++){
		if (v1[i] == old){
			v1[i]=replace;
		}
	}
	printvector(v1);
	cout << endl;
}
