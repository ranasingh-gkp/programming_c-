#include <bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;

vector<string> vec;


bool checkAnagram(string str1,string str2)
{
    int count1[26]={0},count2[26]={0};
    for(int i=0;i<str1.size();i++)
    {
        count1[str1[i]-'a']++;
    }
    for(int i=0;i<str2.size();i++)
    {
        count1[str2[i]-'a']++;
    }

    for(int i=0;i<26;i++)
    {
        if(str1[i]!=str2[i])
            return false;
    }


    return true;

}
void jumbleworld(string a, string b){

    int count1[26]={0};
    bool isBreakedInMiddle=false;
    for(int i=0;i<a.size();i++){
        char ch=a[i];
        count1[ch-'a']++;
    }
    for(int i=0;i<b.size()-a.size(); i++){
        string str=b.substr(i,a.size());
       // cout<<str<<endl;
       //count2[26]={0};
           int count2[26]={0};

        for(int i=0;i<str.size();i++){
            char ch=str[i];
                count2[ch-'a']++;
            }
             isBreakedInMiddle=false;
            for(int j=0;j<26;j++)
            {
                if(count1[j]!=count2[j]){
                    isBreakedInMiddle=true;
                    break ;
                    }

            }
            if(isBreakedInMiddle==false)
            vec.push_back(str);


        }

    }


int main(){
    string a;
    string b;

   cin >>  a;
   cin >>  b;
   jumbleworld(a,b);
   for(int i=0;i<vec.size();i++){
    cout << vec[i] << " ";
   }
   cout << endl;
}

