// Input: s = "babad"
// Output: "bab"
// Explanation: "aba" is also a valid answer.
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s, int start, int end)
{
    while(start<end)
    {
        if(s[start]!=s[end])
        {
            return false;
        }
            start++;
            end --;
    }
    return true;
}
string longestPalindrome(string s)
{
    string ans = "";
    for(int i = 0; i<s.size(); i++)
    {
        for(int j = i; j<s.size(); j++)
        {
            if(isPalindrome(s,i,j))
            {
                string t = s.substr(i, j-i+1);
                ans = t.size()>ans.size()? t:ans;
            }
        }
    }
    return ans;
}
// Driver code
int main()
{
    string s;
    cout<<"Enter a string :"<<endl;
    cin>>s;
    cout<<"The longest palindromic string is :"<<longestPalindrome(s)<<endl;
    return 0;
}
