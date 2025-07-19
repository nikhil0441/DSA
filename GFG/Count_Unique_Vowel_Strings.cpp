#include<iostream>
#include<unordered_map>
using namespace std;
class Solution
{
public:
    int vowelCount(string &s)
    {
        unordered_map<char,int>mp;
        int count=0;
        int dup=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto x:mp){
            if (x.first == 'a' || x.first == 'e' || x.first == 'i' || x.first == 'o' || x.first == 'u'){
                if (x.second==1){
                    count++;
                }else{
                    dup+=x.second;
                }
            }
        }
        int res=1;
        for(int i=1;i<=count;i++){
            res=res*i;

        }
        return res+dup;
        // code here
    }
};