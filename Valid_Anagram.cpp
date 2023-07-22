// Input: s = "anagram", t = "nagaram"
// Output: true
#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s==t)
    return true;
    else
    return false;
}
// Driver code
int main()
{
    string s;
    string t;
    cout<<"Enter the string s:"<<endl;
    cin>>s;
    cout<<"Enter the string t:"<<endl;
    cin>>t;
    cout<<"The valid anagram is :"<<isAnagram(s,t)<<endl;
    return 0;
}