// Input: s = "ab-cd"
// Output: "dc-ba"
#include<bits/stdc++.h>
using namespace std;
string reverseOnlyLetters(string s) 
{
    int low = 0;
    int high = s.size()-1;
    while(low<high)
    {
      if(isalpha(s[low])==isalpha(s[high]))
      {
        swap(s[low], s[high]);
        low++;
        high--;
      }
      else if(isalpha(s[low]))
      {
        low++;
      }
      else
      {
        high--;
      }
    }
    return s;
}
// Driver code
int main()
{
    string s ;
    cout<<"Enter string :"<<endl;
    cin>>s;
    cout<<"Reverse string is :"<<reverseOnlyLetters(s)<<endl;
    return 0;
}