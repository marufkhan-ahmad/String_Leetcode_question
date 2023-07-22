// Input: strs = ["flower","flow","flight"]
// Output: "fl"
#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(string strs)
{
    string ans;
    int i = 0;
    while (true)
    {
        char curr = 0;
        for (auto str : strs)
        {
            // out of bound
            if (i >= strs.size())
            {
                curr = 0;
                break;
            }
            if (curr == 0)
            {
                curr = strs[i];
            }
            else if (curr != strs[i])
            {
                curr = 0;
                break;
            }
        }
        if (curr == 0)
        {
            break;
        }
        ans.push_back(curr);
        i++;
    }
    return ans;
}
//   Driver code
int main()
{
    string strs;
    cout << "Enter string :" << endl;
    cin >> strs;
    cout << "The longest Common Prefix is :" << longestCommonPrefix(strs) << endl;
    return 0;
}
