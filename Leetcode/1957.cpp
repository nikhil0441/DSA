#include<iostream>
using namespace std;
class Solution
{
public:
    string makeFancyString(string s)
    {
        string result;
        int count = 0;

        for (int i = 0; i < s.size(); ++i)
        {
            if (i > 0 && s[i] == s[i - 1])
            {
                count++;
            }
            else
            {
                count = 1;
            }

            if (count < 3)
            {
                result += s[i];
            }
        }

        return result;
    }
};
int main() {
    Solution sol;
    string s = "leeetcode";
    cout << sol.makeFancyString(s) << endl; // Output: "leetcode"

    return 0;
}