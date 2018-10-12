#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
string str= "A man, a plan, a canal: Panama";
int y=0;
int i;
        int j=str.size()-1;
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        while(i<j){
                if(!((('a' <= str[i]) && ('z' >= str[i])) || (('0' <= str[i]) && ('9' >= str[i])))){
                    i++;
                    continue;
                }
                if(!((('a' <= str[j]) && ('z' >= str[j])) || (('0' <= str[j]) && ('9' >= str[j])))){
                    j--;
                    continue;
                }

            if(str[i]==str[j]){
                j--;
                i++;
                continue;
            }
            else{y=1;
                cout << " string is not Palindrome";
                break;
            }


            }
            if(y==0)
             cout << " string is Palindrome";
}

