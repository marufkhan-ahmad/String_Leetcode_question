//  Find the Index of the First Occurrence in a String
// Sliding windows approach
// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Input: haystack = "leetcode", needle = "leeto"
// Output: -1
#include<bits/stdc++.h>
using namespace std;
 int strStr(string haystack, string needle)
 {
    int n = haystack.size();
    int m = needle.size();
    for(int i = 0; i<n-m; i ++)
    {
        for(int j = 0; j<m; j++)
        {
            if(needle[j]!=haystack[i+j])
            {
                break;
            }
            if(j=m-1)
            {
                return i;
            }
        }
    }
    return -1;
 }
//  Driver Code
int main()
{
    string haystack;
    string needle;
    cout<<"Enter haystack:"<<endl;
    cin>>haystack;
    cout<<"Enter needle:"<<endl;
    cin>>needle;
    cout<<"The index occurrence of the string is :"<<strStr(haystack, needle)<<endl;
    return 0;
}