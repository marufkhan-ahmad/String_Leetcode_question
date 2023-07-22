// Input: s = "anagram", t = "nagaram"
// Output: true
#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t)
{
    int FreqTable[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        FreqTable[s[i]]++;
    }
    for (int i = 0; i < t.size(); i++)
    {
        FreqTable[s[i]]--;
    }
    for (int i = 0; i < 256; i++)
    {
        if (FreqTable[i] != 0)
        {
            return true;
        }
    }
    return false;
}
// Driver code
int main()
{
    string s;
    string t;
    cout << "Enter the string s:" << endl;
    cin >> s;
    cout << "Enter the string t:" << endl;
    cin >> t;
    cout << "The valid anagram is :" << isAnagram(s, t) << endl;
    return 0;
}