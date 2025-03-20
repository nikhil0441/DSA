#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution
{
public:
    string reverseWords(string s)
    {
        string a="";
        vector<string>ans;
        for(int i=0;i<s.length();i++){
          if(s[i]!=' '){
            a+=s[i];
          }
          else if(!a.empty()){
        ans.push_back(a);
        a="";
          }
        }
        
    if (!a.empty()) // Push the last word
        ans.push_back(a);

    reverse(ans.begin(), ans.end());
    

        string result = "";
    for (int i = 0; i < ans.size(); i++)
    {
        if (i > 0)
            result += " ";
        result += ans[i];
    }

    return result;
}
};

int main()
{
    Solution sol;
    string s = "  hello world  ";
    cout << sol.reverseWords(s) << endl; // Output: "world hello"
    return 0;
}