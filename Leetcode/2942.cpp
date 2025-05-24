
#include<vector>
#include<iostream>
using namespace std;

class Solution
{
public:
    vector<int> findWordsContaining(vector<string> &words, char x)
    {
        vector<int> ans;
        for (int i = 0; i < words.size(); i++)
        {
            if (words[i].find(x)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
int main(){
 
    Solution solution;
    vector<string>arr={"abc","abh"};
    char x='a';
    vector<int>res=solution.findWordsContaining(arr,x);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<endl;
    }

}