//https://www.interviewbit.com/problems/minimum-characters-required-to-make-a-string-palindromic/
//Minimum Characters required to make a String Palindromic
bool checkPallindrome(string str)
{
    int i=0;
    int j=str.size()-1;
    while(i<j)
    {
        if(str[i]!=str[j])
        {
            return false;
        }
        i++;
        j--;
    }

    return true;
}
int Solution::solve(string A) {
    int ans=0;

    for(int i=A.size();i>=1;i--)
    {
        string str1=A.substr(0,i);
        if(checkPallindrome(str1)==true)
        {
            return ans;
        }
        else{
            ans++;
        }

    }
}
