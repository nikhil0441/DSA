#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maximumLength(string s)
    {
        unordered_map<string, int> mp;
        int n = s.length();
        int len = 0; // Initialize length as 0 instead of -1

        // Generating all possible substrings and counting their occurrences
        for (int i = 0; i < n; ++i)
        {
            string sub = "";
            for (int j = i; j < n; ++j)
            {
                if (sub.empty() || sub.back() == s[j])
                {
                    sub += s[j]; // Append current character
                    mp[sub]++;
                }
                else
                {
                    break;
                }
            }
        }

        // Finding the longest substring that appears at least 3 times
        for (auto &p : mp)
        {
            string str = p.first;
            int count = p.second;
            if (count >= 3 && str.length() > len)
            {
                len = str.length();
            }
        }

        return len;
    }
};

int main()
{
    string s = "abc";
    Solution s;
    int result = s.maximumLength(s);

    cout << "Length of the longest substring that appears at least 3 times: " << result << endl;
    return 0;
}
