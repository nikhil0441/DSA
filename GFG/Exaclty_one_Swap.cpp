#include <iostream>
#include <math.h>
using namespace std;

class Solution
{
public:
    int countStrings(string &s)
    {
        // code here
        int count = 0;
        string ans = s;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i + 1; j < s.size(); j++)
            {
                
                swap(s[i], s[j]);
                 if (s!=ans){
                    count++;
                 }
                 
            }
        }
        return count;
    }
};
int main(){
    string s="aaa";
    Solution obj;
    cout<<obj.countStrings(s);
}
