// Remove All Adjacent Duplicates In String
// Input: s = "abbaca"
// Output: "ca"
// Explanation:
// For example, in "abbaca" we could remove "bb"
// since the letters are adjacent and equal,
// and this is the only possible move.
// The result of this move is that the string is "aaca",
//  of which only "aa" is possible, so the final string is "ca".
#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string s)
{
    string ans = "";
    int i = 0;
    while (i < s.length())
    {
        if (ans.length() && ans[ans.length() - 1] == s[i])
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(s[i]);
        }
        i++;
    }
    return ans;
}
// Driver Code
int main()
{
    string s;
    cout<<"Enter a string :"<<endl;
    cin>>s;
    cout<<"The resultant string is :"<<removeDuplicates(s)<<endl;
    return 0;
}
