#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> mergeArrays(vector<vector<int>> &nums1, vector<vector<int>> &nums2)
    {
        int i = 0, j = 0;
        vector<vector<int>> ans;

        while (i < nums1.size() && j < nums2.size())
        {
            int id1 = nums1[i][0];
            int val1 = nums1[i][1];
            int id2 = nums2[j][0];
            int val2 = nums2[j][1];

            if (id1 < id2)
            {
                ans.push_back({id1, val1});
                i++;
            }
            else if (id1 > id2)
            {
                ans.push_back({id2, val2});
                j++;
            }
            else
            {
                ans.push_back({id1, val1 + val2});
                i++;
                j++;
            }
        }

        // If there are remaining elements in nums1
        while (i < nums1.size())
        {
            ans.push_back({nums1[i][0], nums1[i][1]});
            i++;
        }

        // If there are remaining elements in nums2
        while (j < nums2.size())
        {
            ans.push_back({nums2[j][0], nums2[j][1]});
            j++;
        }

        return ans;
    }
};

int main()
{
    Solution solution;

    // Test case 1
    vector<vector<int>> nums1 = {{1, 3}, {2, 2}, {4, 1}};
    vector<vector<int>> nums2 = {{1, 2}, {3, 4}, {4, 5}};

    // Call mergeArrays to merge nums1 and nums2
    vector<vector<int>> result = solution.mergeArrays(nums1, nums2);

    // Output the result
    cout << "Merged arrays: " << endl;
    for (const auto &pair : result)
    {
        cout << "[" << pair[0] << ", " << pair[1] << "] ";
    }
    cout << endl;

    return 0;
}
