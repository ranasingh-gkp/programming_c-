//https://www.hackerrank.com/challenges/palindrome-index/problem
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int y=0;
string s = "rana";
string t = "aanr";
transform(s.begin(), s.end(), s.begin(), ::tolower);
transform(t.begin(), t.end(), t.begin(), ::tolower);
int count1[26]={0};
int count2[26]={0};
if (s.size()!=t.size()){
        y=1;
}
for ( int i=0; i<s.size(); i++){
    char ch=s[i];
    count1[ch-'a']++;
}
for ( int i=0; i<t.size(); i++){
    char ch=t[i];
    count2[ch-'a']++;
}
for(int i=0; i<s.size();i++){
    if (count1[i]!=count2[i]){
        y=1;
    }


}
if (y=0)
cout << "Anagram" << endl;

else
    cout << " not Anagram" << endl;
}
