#include <vector>
using namespace std;

class Solution
{
public:
    bool canPartition(vector<int> &nums)
    {
        int totSum = 0;
        int n = nums.size(); // Initialize 'n' as size of the array

        // Calculate the total sum
        for (int i = 0; i < n; i++)
        {
            totSum += nums[i];
        }

        // If the total sum is odd, partitioning is not possible
        if (totSum % 2 != 0)
        {
            return false;
        }

        int target = totSum / 2;

        // Use dynamic programming to solve the problem
        return helper(n, target, nums);
    }

private:
    bool helper(int n, int target, vector<int> &nums)
    {
        vector<vector<bool>> dp(n + 1, vector<bool>(target + 1, false));

        // Base case: target of 0 is always achievable
        for (int i = 0; i <= n; i++)
        {
            dp[i][0] = true;
        }

        // Fill the DP table
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= target; j++)
            {
                if (nums[i - 1] <= j)
                {
                    dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        return dp[n][target];
    }
};