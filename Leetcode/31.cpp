#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution
{
public:
    void nextPermutation(vector<int>&a)
    {
        // next_permutation(s.begin(),s.end());
        int n=a.size(),i=n-2;
        while(i>=0 && a[i]>=a[i+1]){
            i--;
        }
        if(i>=0){
            int j=n-1;
            while(a[j]<=a[i]){
                j--;
            }
            swap(a[i],a[j]);
        }
        reverse(a.begin()+i+1,a.end());
    }
};
int main(){
    Solution s;
    vector<int>nums={1,3,2};
    s.nextPermutation(nums);
    for(int a:nums){
        cout<<a<<" ";
    }
}