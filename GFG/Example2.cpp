#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution
{  
public:
int mini;
    stack<int> ans;
    Solution()
    {
        // code here
    }

    // Add an element to the top of Stack
    void push(int x)
    {
        // code here
        if(ans.empty()) mini=x;
        else if(x<=mini){
            ans.push(mini);
            ans.push(x);
        }
        
        

    }

    // Remove the top element from the Stack
    void pop()
    {
        // code here
        if(ans.empty())
        return ;
        int temp=ans.top();
        ans.pop();
        if(temp==mini && !ans.empty()){
            mini=ans.top();
            ans.pop();
        }
    }

    // Returns top element of the Stack
    int peek()
    {
        // code here
        if(ans.empty())
        return -1;
        return ans.top();
    }

    // Finds minimum element of Stack
    int getMin()
    {
        // code here
        if(ans.empty())
        return -1;
        return mini;
    }
};