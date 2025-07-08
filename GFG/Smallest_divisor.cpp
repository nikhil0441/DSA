#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int sumByD(const vector<int> &arr, int mid)
    {
        int sum = 0;
        for (int num : arr)
        {
            sum += ceil(num * 1.0 / mid);
        }
        return sum;
    }

    int smallestDivisor(vector<int> &arr, int k)
    {
        int low = 1, high = *max_element(arr.begin(), arr.end());

        while (low <= high)
        {
            int mid = low + (high - low) / 2; // Prevents integer overflow
            if (sumByD(arr, mid) <= k)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};

int main()
{
    Solution s;
    vector<int> arr = {1, 2, 5, 9};
    int k = 6;
    cout << s.smallestDivisor(arr, k) << endl;
}