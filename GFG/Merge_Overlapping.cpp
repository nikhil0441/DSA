#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
class Soluction{
    public :
        vector<vector<int>> MergeOverlapping(vector<vector<int>> &arr){
            sort(arr.begin(),arr.end());
            vector<vector<int>>res;
            int n=arr.size();
            
           
            for(auto & a:arr){
                if(res.empty() || res.back()[1]<a[0]){
                    res.push_back(a);

                }
                else{
                    res.back()[1]=max(res.back()[1],a[1]);
                }
            }
            return res;

        }
};
int main(){
    vector<vector<int>>arr={{1,3},{4,6},{8,10}};
   
 
    Soluction s;
    vector<vector<int>> res = s.MergeOverlapping(arr);
    for(int i=0;i<res.size();i++){
        cout<<res[i][0]<<" "<<res[i][1]<<endl;
    }
}