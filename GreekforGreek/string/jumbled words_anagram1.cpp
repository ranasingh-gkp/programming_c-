#include <bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;


bool checkAnagram(string str1,string str2)
{
    int count1[26]={0},count2[26]={0};
    for(int i=0;i<str1.size();i++)
    {
        count1[str1[i]-'a']++;
    }
    for(int i=0;i<str2.size();i++)
    {
        count2[str2[i]-'a']++;
    }

    for(int i=0;i<26;i++)
    {
        if(count1[i]!=count2[i])
            return false;
    }


    return true;

}
void jumbleworld(string a, string b,vector<string> & vec)
{

    for(int i=0;i<b.size()-a.size(); i++){
        string str=b.substr(i,a.size());
        if(checkAnagram(a,str))
            vec.push_back(str);

        }
    }


int main(){
    string a;
    string b;
  vector<string> vec;

   cin >>  a;
   cin >>  b;
   jumbleworld(a,b,vec);
   for(int i=0;i<vec.size();i++){
    cout << vec[i] << " ";
   }
   cout << endl;
}

