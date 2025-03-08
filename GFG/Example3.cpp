
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

class Solution
{
public:
    vector<int> maxOfSubarrays(vector<int> &arr, int k)
    {
        int n=arr.size();
        vector<int>ans;
        int count=0;
        while(count<=n-k){
            int maxi=INT_MIN;
            for(int i=count;i<(k+count);i++){
               maxi=max(arr[i],maxi);
            }
            ans.push_back(maxi);
            count++;
            
        }
        return ans;
    }
};
int main(){
Solution sol;
vector<int> arr = { 5, 1, 3, 4, 2, 6 };
int k=1;
vector<int>re=sol.maxOfSubarrays(arr,k);
for(int val:re){
    cout<<val<<" ";
}
}