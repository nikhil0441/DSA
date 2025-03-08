#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> calculateSpan(vector<int> &arr)
    {
        // Create a result vector to store the span values.
        vector<int> ans(arr.size(), 1);

        // Iterate through each element of the array starting from index 1.
        for (int i = 1; i < arr.size(); i++)
        {
            int count = 1; // The span starts with 1 (the current day itself).
            int j = i - 1;

            // Check for previous days where the price is greater than or equal to the current day's price.
            while (j >= 0 && arr[i] >= arr[j])
            {
                count++;
                j--; // Move to the previous day.
            }

            ans[i] = count; // Store the span value for the current day.
        }

        return ans; // Return the span values.
    }
};

int main()
{
    Solution sol;
    vector<int> arr = { 100, 80, 60, 70, 60, 75, 85 };
    vector<int> span = sol.calculateSpan(arr);

    // Output the span values for each day.
    for (int s : span)
    {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
