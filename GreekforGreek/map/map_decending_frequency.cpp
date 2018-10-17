//https://leetcode.com/problems/top-k-frequent-elements/description/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    map<int,int> map1;
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(2);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(3);
    for(int i=0;i<vec.size(); i++){
        cout << vec[i]<< " ";
    }
    cout << endl;
for (auto x : vec){

   // map1[x]=1;

if(map1.find(x)==map1.end()){
    map1[x]=1;
}
else
map1[x]++;
}
for(auto x: map1){
    cout << x.first << " "<< x.second << endl;
}


}

