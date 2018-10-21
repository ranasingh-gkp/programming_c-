//https://leetcode.com/problems/longest-palindromic-substring/description/
// Longest Palindromic Substring

class Solution {
public:
    string longestPalindrome(string A) {

        int j=A.size();
        int i=0;
        while(j>i){
            for(int k=0;k<=(A.size()-j); k++){
                string A1=A.substr(k,j);
                int m=0;
                int n=A1.size()-1;
                int y=0;
                while(m<n){

                          if(A1[m]==A1[n]){
                            n--;
                            m++;
                            continue;
                        }
                        else{y=1;

                            break;
                        }
                }

                        if(y==0){

                            return A1;

                            }
                }



                 j--;
            }


            return ""+A    [0];
        }


};
