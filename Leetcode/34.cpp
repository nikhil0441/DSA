#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                ans.push_back(i);
            }
        }
        if (ans.size() == 0)
        {
            return {-1, -1};
        }
        else
        {
            return {ans[0], ans[ans.size() - 1]};
        }
    }
};