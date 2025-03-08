#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

class Solution
{
public:
    vector<int> closestPrimes(int left, int right)
    {
        vector<int> prime;
        for (int i = left; i <= right; i++)
        {int count=0;
            for(int j=1;j<=i;j++){
                      if(i%j==0){
                        count++;
                      }
            }
            if(count==2){
                prime.push_back(i);
            }
        }
        sort(prime.begin(), prime.end());
        int diff=INT_MAX;
        int arr[]={-1,-1};
        for(int i=1;i<prime.size();i++){
           int d=prime[i]-prime[i-1];
           if(d<diff){
            diff=d;
              arr[0]=prime[i-1];
              arr[1]=prime[i];
           }
        }
            
            
         return {arr[0],arr[1]};
            
        
    }
};
    int main(){
        Solution s;
       vector<int>ans= s.closestPrimes(19,23);
       cout<<ans[0]<<" "<<ans[1];
    }