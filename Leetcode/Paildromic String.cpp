#include <iostream>
using namespace std;

class Solution
{
public:
    // Function to check if s[i...j] is a palindrome
    bool isPalindrome(string &s, int i, int j)
    {
        while (i < j)
        {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }

    // Function to determine the index to remove to make s a palindrome
    int palindromic(string s)
    {
        int i = 0, j = s.length() - 1;

        while (i < j)
        {
            if (s[i] != s[j])
            {
                // Check if removing s[i] makes it a palindrome
                if (isPalindrome(s, i + 1, j))
                    return i;
                // Check if removing s[j] makes it a palindrome
                if (isPalindrome(s, i, j - 1))
                    return j;
                // If neither removal works, return -1
                return -1;
            }
            i++;
            j--;
        }

        return -1; // The string is already a palindrome
    }
};

int main()
{
    Solution s;
    string str = "abac"; // Example test case
    int ans = s.palindromic(str);
    cout << ans << endl; // Output the index to remove, or -1 if already a palindrome
}
