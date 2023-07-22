#include <bits/stdc++.h>
using namespace std;
string ReverseOnlyletters(string s)
{
    int start = 0;
    int end = s.size() - 1;
    while (start < end)
    {
        if (isalpha(s[start]) == isalpha(s[end]))
        {
            swap(s[start], s[end]);
            start++;
            end--;
        }
        else if (isalpha(s[start]))
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return s;
}
//  Driver code
int main()
{
    string s;
    cout << "Enter string :" << endl;
    cin >> s;
    cout << "The reverse letters of the string is :" << ReverseOnlyletters(s) << endl;
    return 0;
}