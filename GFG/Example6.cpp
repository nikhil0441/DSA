#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
{
public:
    int calculateSum(vector<int> &arr)
    {
        // code here
        int score = 0;
        sort(arr.begin(), arr.end());
        int n = arr.size();
        for (int i = 0; i < n / 2; i++)
        {
            score += abs(arr[i] - arr[n - 1 - i]);
        }
        return score;
    }
};

int main(){
    Solution s;
    vector<int>arr={2,8,3,7};
    int ans=s.calculateSum(arr);
    cout<<ans;
}