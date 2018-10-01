// CPP program to find N-th term of the series: 
// 1, 4, 15, 72, 420… 
#include <iostream> 
using namespace std; 
  
// Function to find factorial of N 
int factorial(int N) 
{ 
    int fact = 1; 
  
    for (int i = 1; i <= N; i++) 
        fact = fact * i; 
          
    // return factorial of N         
    return fact; 
} 
  
// calculate Nth term of series 
int nthTerm(int N) 
{ 
    return (factorial(N) * (N + 2) / 2); 
} 
  
// Driver Function 
int main() 
{ 
    int N = 6; 
      
    cout << nthTerm(N); 
      
    return 0; 
}
