#include <iostream>

using namespace std;

template<class T>  // (generic template) T is any type of data
class rana{
	public:
		rana(T x){
			cout << x << " is not the carector" << endl;
		}
};

template<>
class rana<char>{  // only charector
	public:
		rana(char x){
			cout << x << " is indeed the carector" << endl;
		}
};




int main () {
	rana<int> obj1(7);   // substitute T with int
	rana<double> obj2(3.56);
	rana<char> obj3('q');
	
}




