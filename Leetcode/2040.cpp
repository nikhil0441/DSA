#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

class Solution
{
public:
    long long kthSmallestProduct(vector<int> &nums1, vector<int> &nums2, long long k)

    {

    vector<long long>ans;
    int n=nums1.size();
    int m=nums2.size();
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
        int prod=nums1[i]*nums2[j];
        ans.push_back(prod);
       }

    }
    sort(ans.begin(),ans.end());

    return ans[k-1];

    }
};
class Solution1
{
public:
    long long kthSmallestProduct(vector<int> &nums1, vector<int> &nums2, long long k)
    {
        long long result=0;
        long long left=-1e10;
        long long right=1e10;
        while (left<=right){
            long long mid=left+(right-left)/2;
            long long countSmallest=findCountSmallest(nums1,nums2,mid);
            if(countSmallest>=k){
                result=countSmallest;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
            return result;
        }
        
        
    }
    long long findCountSmallest(vector<int> &nums1, vector<int> &nums2, long long mid){
        long long productCount=0;
        int n=nums2.size();
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]>=0){
                 int l=0;
                 int r=n-1;
                 int m=-1;
                 while()
            }
            else{

            }
        }
    }
};

int main(){
    vector<int>nums1={-4,-2,0,3};
    vector<int>nums2={2,4};
    int k=6;
    Solution s;
    cout<<s.kthSmallestProduct(nums1,nums2,k);
}