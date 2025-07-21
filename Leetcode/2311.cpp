#include<iostream>
#include<math.h>
using namespace std;
class Solution {
    int help(string s,int n,int k,int sizee){
        if(n<0){
            return 0;
        }
        int notTake=help(s,n-1,k,sizee);
        int take=0;
        int val=(s[n]-'0')* pow(2,sizee);
        if(val<=k){
            take=1+help(s,n-1,k-val,sizee+1);
        }
        return max(take,notTake);
    }
    public:
        int longestSubsequence(string s, int k) {
            int n=s.size();
            int ans=help(s,n-1,k ,0);
            cout<<ans;
            
        }
    };
    int main(){
        Solution s;
        string s1 = "1001010";
            int k = 5;
        cout<<s.longestSubsequence(s1,k);
    }