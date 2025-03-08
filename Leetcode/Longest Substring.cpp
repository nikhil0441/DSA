
 #include<iostream>
 using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int count=0;
        int mxlen=0;
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                if(s[i]==s[j]){
                    mxlen=max(count,mxlen);
                    count=0;
                }
                else{
                    count++;
                } 
            }
        }
        return mxlen;
    }
};
int main(){
    Solution str;
    string s="abcabcbb";
    int ans=str.lengthOfLongestSubstring(s);
    cout<<ans;
}