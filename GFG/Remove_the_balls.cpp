#include<iostream>
#include<vector>
#include<stack>
using namespace std;
// class Solution
// {
// public:
//     int findLength(vector<int> &color, vector<int> &radius)
//     {
//         int n=color.size();
//         int count=0;
//         for(int i=1;i<n;i=i+2){
//             if((color[i-1] ==color[i]) && (radius[i-1] == radius[i]) ){
//                 count=count+2;
//             }
//         }
//         return  n-count;
//     }
// };

class Solution
{
public:
    int findLength(vector<int> &color, vector<int> &radius)
    {
        int n = color.size();
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            if (!st.empty() && color[i] == color[st.top()] && radius[i] == radius[st.top()])
                st.pop();
            else
                st.push(i);
        }
        return st.size();
    }
};
int main(){
    vector<int>color={1,2,2,1};
    vector<int>radius={1,2,2,1};
    Solution s;
    cout<<s.findLength(color,radius);
}