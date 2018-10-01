// CPP program to find N-th term of the series: 
// 0, 2, 4, 8, 12, 18... 
#include <iostream> 
using namespace std; 

// calculate Nth term of series 
int nthTerm(int N) 
{ 
    
	return ((N + N * (N - 1)) / 2); 
} 

// Driver Function 
int main() 
{ 
	int N = 5; 

	cout << nthTerm(N); 

	return 0; 
} 

