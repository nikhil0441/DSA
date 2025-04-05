// class Solution
// {
// public:
//     int subsetXORSum(vector<int> &nums)
//     {
//         int ans = 0; // Initialize the result

//         // Iterate through each number and calculate its contribution
//         for (int num : nums)
//         {
//             ans |= num; // Use bitwise OR to calculate combined contribution
//         }

//         return ans << (nums.size() - 1);
//     }
// };

class Solution
{
public:
    void solve(vector<int> &nums, int i, vector<int> &currsub, vector<vector<int>> &subsets)
    {
        if (i == nums.size())
        {
            subsets.push_back(currsub);
            return;
        }
        currsub.push_back(nums[i]);
        solve(nums, i + 1, currsub, subsets);
        currsub.pop_back();
        solve(nums, i + 1, currsub, subsets);
    }
    int subsetXORSum(vector<int> &nums)
    {
        vector<int> currsub;
        int ans = 0;
        vector<vector<int>> subsets;
        solve(nums, 0, currsub, subsets);
        for (auto subset : subsets)
        {
            int Xor = 0;
            for (int &p : subset)
            {
                Xor ^= p;
            }
            ans += Xor;
        }
        return ans;
    }
};