#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    long long goodTriplets(vector<int> &nums1, vector<int> &nums2)
    {
        vector<vector<int>> ans1, ans2;
        int n = nums1.size();

        // Generate all triplets (i, j, k) where i < j < k
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    ans1.push_back({nums1[i], nums1[j], nums1[k]});
                    ans2.push_back({nums2[i], nums2[j], nums2[k]});
                }
            }
        }


        cout<<ans1.size()<<endl;;
        cout<<ans2.size();

        long long count = 0;

        // Compare the generated triplets
        for (int i = 0; i < ans1.size(); i++)
        {
            if ((ans1[i][0] == ans2[i][0]) && (ans1[i][1] == ans2[i][1]) && (ans1[i][2] == ans2[i][2]) ){
                count++;
            }
        }
    

        return count;
    }
};

int main()
{
    int n;
    cout << "Enter size of arrays: ";
    cin >> n;

    vector<int> nums1(n), nums2(n);

    cout << "Enter elements of nums1: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums1[i];
    }

    cout << "Enter elements of nums2: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums2[i];
    }

    Solution sol;
    long long result = sol.goodTriplets(nums1, nums2);

    cout << "Number of matching triplets: " << result << endl;

    return 0;
}
