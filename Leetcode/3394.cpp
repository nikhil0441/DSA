#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
class Solution
{
public:
    bool checkValidCuts(int n, vector<vector<int>> &rect)
    {
        vector<vector<int>>x;
        vector<vector<int>> y;
        
        for(auto p:rect){
            vector<int> ans;
            vector<int>ans1;
            ans.push_back(p[0]);
            ans1.push_back(p[1]);
            ans.push_back(p[2]);
            ans1.push_back(p[3]);
            x.push_back(ans);
            y.push_back(ans1);
        }
        sort(begin(x),end(x));
        sort(begin(y),end(y));
        vector<vector<int>>X;
        vector<int>prev=x[0];
        X.push_back(prev);
        for(int i=1;i<x.size();i++){
            vector<int>temp=x[i];
            if(temp[0]<=prev[1]){
                prev[1]=max(prev[1],temp[1]);
            }
            else{
                X.push_back(prev);
                prev=temp;
            }
        }
        X.push_back(prev);
        vector<vector<int>> Y;
        vector<int> prev1 = y[0];
        Y.push_back(prev1);
        for (int i = 1; i < y.size(); i++)
        {
            vector<int> temp = y[i];
            if (temp[0] <= prev1[1])
            {
                prev1[1] = max(prev1[1], temp[1]);
            }
            else
            {
                Y.push_back(prev1);
                prev1 = temp;
            }
        }
        Y.push_back(prev1);
        if(X.size()>=3 || Y.size()>=3){
            return true;
        }
        return false;
    }
};
int main(){
    Solution s;
    int n=5;
    vector<vector<int>> rect = { { 0, 2, 2, 4 }, { 1, 0, 3, 2 }, { 2, 2, 3, 4 }, { 3, 0, 4, 2 }, { 3, 2, 4, 4 } };
    bool ans = s.checkValidCuts(5, rect);
    if (ans)
    {
        cout << "true" << endl;
   }
   else{
    cout<<"false"<<endl;
   }
}