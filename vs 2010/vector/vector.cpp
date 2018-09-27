#include <iostream>
#include <vector>

using namespace std;

int main(){
	// format vector<datatype> v
	// v.push_back(value) ==> add element to end of vector
	// cout << v.at(i) ==> return an unsigned int equal the top the number of element.
	// v.begin() ==>  read vector from first element(index 0)
	// v.insert(v.begin() + integer(optional), new value) ==> add element at specified number
	// v.erase(v.begin()+integer(optional) ==> remove element at specified index no
	// v.clear() ==> remove all element in vector
	// v.empty() ==> return boolen value if vector empty
	vector<int> v;
	v.push_back(3);
	v.push_back(5);
	v.push_back(4);
	v.push_back(12);
	v.push_back(9);
	
	cout << "vector:  ";
	for (unsigned int i=0;i<v.size();i++){
		// cout << v.at(i);
		cout << v[i]<< " ";
	}
	v.insert(v.begin()+ 3,5);
	
	cout << endl << "vector:  ";
	for (unsigned int i=0;i<v.size();i++){
		// cout << v.at(i);
		cout << v[i]<< " ";	
}
v.erase(v.begin()+4);
	cout << endl << "vector:  ";
	for (unsigned int i=0;i<v.size();i++){
		// cout << v.at(i);
		cout << v[i]<< " ";	
	}
	if(v.empty()){
		cout << endl << "is empty";
	}
	else {
		cout << endl << "is not empty";
	}
	v.clear();
		if(v.empty()){
		cout << endl << "is empty";
	}
	else {
		cout << endl << "is not empty";
	}

	

cout << endl;
return 0;
}
