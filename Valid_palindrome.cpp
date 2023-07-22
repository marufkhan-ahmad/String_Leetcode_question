// Given a string s, return true if the s can be palindrome after deleting at most one character from it.
// Input: s = "abca"
// Output: true
// Explanation: You could delete the character 'c'.
#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s, int start, int end)
{
    while(start<=end)
    {
        if(s[start]!= s[end])
        
         return false;
         start++;
         end--;
    }
    return true;
}
 bool validPalindrome(string s)
 {
    int start = 0;
    int end = s.length()-1;
    while(start<=end)
    {
        if(s[start]!=s[end])
        {
        return checkPalindrome(s, start+1, end) || checkPalindrome(s,start, end-1);
        }
     else
    {
        start++;
        end--;
    }
    }
    return true;
 }
// Driver code
int main()
{
    string s;
    cout<<"Enter a string :"<<endl;
    cin>>s;
    cout<<"The valid palindrome is :"<<validPalindrome(s)<<endl;
        return 0;
}