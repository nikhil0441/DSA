#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Soluction{
    public:
     int solve(vector<int>arr,int n){
        int max_len=0;
     for(int i=0;i<n;i++){
        int currsum=0;
        for(int j=i;j<n;j++){
            currsum+=arr[j];
            if (currsum == 0)
            {
                max_len = max(max_len, j - i + 1);
            }
        }
     

     }
     return max_len;
    }
 
    int solve2(vector<int>arr,int n){
        unordered_map<int,int>mp;
        int sum=0;
        int maxlen=0;
        for(int i=0;i<n;i++){
           sum+=arr[i];
           if(sum==0){
            maxlen=i+1;
           }
           if(mp.find(sum)!=mp.end()){
            maxlen=max(maxlen,i-mp[sum]);

           }
           else{
            mp[sum]=i;
           }
        }
        return maxlen;
    }
};
int main(){
    Soluction s;
    vector<int>arr{1,0,3};
    int n=arr.size();
    cout<<s.solve2(arr,n);
}