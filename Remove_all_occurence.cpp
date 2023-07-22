//  Remove All Occurrences of a Substring
// Input: s = "daabcbaabcbc", part = "abc"
// Output: "dab"
#include<bits/stdc++.h>
using namespace std;
string removeOccurrences(string s, string part)
{
    int pos = s.find(part);
    while(pos!=string::npos)
    {
        s.erase(pos, part.length());
        pos = s.find(part);
    }
    return s;
}
// Driver code
int main()
{
    string s  = "daabcbaabcbc";
    string part = "dab" ;
    cout << "Given string is :" << s << endl;
    cout << "Removing part of string is : " << part << endl;
    cout<<"The occurence of the string is :"<<removeOccurrences(s,part)<<endl;
    
    return 0;
}