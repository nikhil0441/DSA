// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;
// class Solution {
//     public:
//       vector<int> findGreater(vector<int>& arr) {
          
//         int n=arr.size();
//         vector<int >ans(n,-1);
//         unordered_map<int,int>mp;
//         for(auto i:arr){
//             mp[i]++;
//         }
          
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(mp[arr[j]]>mp[arr[i]]){
//                     ans[i]=arr[j];
//                     break;
//                 }
//             }
         
//         }
//         return ans;
//       }
//   };

//   int main()
//   {
//       vector<int> arr = {1, 2, 2, 3, 1, 2, 1};
//       Solution sol;
//       vector<int> result = sol.findGreater(arr);

//       cout << "Next elements with greater frequency:\n";
//       for (int val : result)
//       {
//           cout << val << " ";
//       }
//       cout << endl;

//       return 0;
//   }

#include <iostream>
#include <vector>
#include <unordered_map>
#include<stack>
using namespace std;

// class Solution
// {
// public:
//     vector<int> findGreater(vector<int> &arr)
//     {
//         int n = arr.size();
//         vector<int> ans(n, -1);
//         unordered_map<int, int> freq;

//         // Step 1: Count frequencies
//         for (int num : arr)
//             freq[num]++;

//         // Step 2: Find next greater frequency element
//         for (int i = 0; i < n; ++i)
//         {
//             for (int j = i + 1; j < n; ++j)
//             {
//                 if (freq[arr[j]] > freq[arr[i]])
//                 {
//                     ans[i] = arr[j];
//                     break;
//                 }
//             }
//         }

//         return ans;
//     }
// };

// int main()
// {
//     vector<int> arr = {1, 2, 2, 3, 1, 2, 1};
//     Solution sol;
//     vector<int> result = sol.findGreater(arr);

//     cout << "Next elements with greater frequency:\n";
//     for (int val : result)
//     {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }
class Solution
{
public:
    vector<int> findGreater(vector<int> &arr)
    {
        int n=arr.size();
        vector<int>ans(n,-1);
        unordered_map<int,int>mp;
        stack<int>st;
        for(int num:arr){
            mp[num]++;
        }
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && mp[arr[st.top()]] <= mp[arr[i]])
            st.pop();

            if(!st.empty()){
                ans[i]=arr[st.top()];
            }
            st.push(i);
        }

    }
};
