#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution
{
public:
    bool divideArray(vector<int> &nums)
    {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for (auto p : mp)
        {
            if (p.second % 2 != 0)
            {
                return false;
            }
        }
        return true;
    }
};

// Main function to test divideArray
int main()
{
    Solution sol;
    vector<int> nums = {3, 3, 2, 2, 2, 2}; // Example input

    if (sol.divideArray(nums))
    {
        cout << "Array can be divided into pairs" << endl;
    }
    else
    {
        cout << "Array cannot be divided into pairs" << endl;
    }

    return 0;
}
