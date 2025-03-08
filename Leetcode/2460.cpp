
#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    vector<int> applyOperations(vector<int> &nums)
    {
        int zerocount = 0; // Keeps track of how many zeros are in the list
        vector<int> ans;   // This will hold the final result after applying operations

        // Loop through nums, except the last element, because we are comparing pairs
        for (int i = 0; i < nums.size() - 1; i++)
        {
            // If two adjacent elements are equal, double the first element and set the second one to 0
            if (nums[i] == nums[i + 1])
            {
                nums[i] = nums[i] * 2;
                nums[i + 1] = 0;
            }
            // Count how many zeros exist after operations
            
        }

        // Add non-zero elements to the final result
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                ans.push_back(nums[i]);
            }
        }
            zerocount=nums.size()-ans.size();
        // Add the appropriate number of zeros to the end of the result
        for (int i = 0; i < zerocount; i++)
        {
            ans.push_back(0);
        }

        return ans; // Return the final result
    }
};

int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);

    }
    Solution s;
    vector<int>ans=s.applyOperations(v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}