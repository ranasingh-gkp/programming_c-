# include <iostream>

#include <string>

using namespace std;

int main() {
	// continue ==> skip to next iteration
	// break ==> exits loops 

	int i=1;
	while(i<=12){
		for (int j=1;j<=12; j++){
			cout << i << " x " << (i*j) << endl;
		}
		i++;
	}
	return 0;
}
