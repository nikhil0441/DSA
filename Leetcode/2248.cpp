 #include<iostream>
 #include<vector>
 #include<unordered_map>
 #include<algorithm>
 using namespace std;
class Solution
{
public:
    vector<int> intersection(vector<vector<int>> &nums)
    {  
        vector<int>v;
       unordered_map<int,int>mp;
        int n=nums.size();
        int m;
        for(int i=0;i<n;i++){
             m=nums[i].size();
            for(int j=0;j<m;j++){
                mp[nums[i][j]]++;
            }
        }
        for(auto p:mp){
            if(p.second==n){
                v.push_back(p.first);
            }
        }
        // cout<<n;
        sort(v.begin(), v.end());
         return v;
    }
};
int main(){
    vector<vector<int>> nums={{1,2,3},{4,4}};
    Solution s;
    vector<int>ans=s.intersection(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}