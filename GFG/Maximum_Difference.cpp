#include<iostream>
#include<unordered_map>
using namespace std;
class Solution
{
public:
    int maxDifference(string s)
    {
        unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;

        }
        int odd=0,even=s.size()+1;
        for(auto & a:mp){
            if(a.second%2==0){
                even=min(even,a.second);
            }
            else{
                odd=max(odd,a.second);
            }
        }
        return odd-even;
    }
};
int main(){
    string s="aaaaabbc";
    Solution obj;
    cout<<obj.maxDifference(s);
    
}