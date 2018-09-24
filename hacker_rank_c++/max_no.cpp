#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d){

    int s[4]={a,b,c,d};

    int highnum=0;
    for(int i=0;i<4;i++){	
        if (s[i]>highnum)
        highnum=s[i] ;           
            }
            return highnum;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("max num is : %d", ans);
    
    return 0;
}



