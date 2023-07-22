// Reverse Vowels of a String
// Input: s = "hello"
// Output: "holle"
#include <bits/stdc++.h>
using namespace std;
bool isVowel(char ch)
{
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || 'o' || ch == 'u';
}

string reverseVowels(string s)
{
    // use two pointer approach
    int start = 0;
    int end = s.size() - 1;
    while (start < end)
    {
        if (isVowel(s[start]) && isVowel(s[end]))
        {
            swap(s[start], s[end]);
            start++;
            end--;
        }
        else if (isVowel(s[start] == 0))
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

// Driver code
int main()
{
    string s;
    cout << "Enter a string :" << endl;
    cin >> s;
    cout << "The reverse string of the Vowel is : " << reverseVowels(s) << endl;
    return 0;
}