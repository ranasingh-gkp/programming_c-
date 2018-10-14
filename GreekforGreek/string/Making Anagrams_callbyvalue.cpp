//https://www.hackerrank.com/challenges/making-anagrams/problem
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// Complete the makingAnagrams function below.
vector<int>  makingAnagramscheck(string s,vector<int> count) {

    for(int i=0;i<s.size();i++){
        char ch=s[i];
        count[ch-'a']++;
            }
   return count;
}

int makingAnagrams(string s1, string s2){
    vector<int> x(26);
    vector<int> y(26);
    int sum=0;
    x=makingAnagramscheck(s1,x);



    y=makingAnagramscheck(s2,y);




    for(int i=0;i<26;i++){
        sum+=abs(x[i]-y[i]);
        //cout << *(x+i) <<" "<<*(y+i)<<endl;
    }
    return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}

