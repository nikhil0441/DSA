#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;
int romanToInt(string s){
    unordered_map<char,int>up{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    int res=0;
    for(int i=0;i<s.size();i++){
       if(up[s[i]]<up[s[i+1]]){
        res=res-up[s[i]];
       }
       else{
        res=res+up[s[i]];
       }
    }
    return res;
}
int main()
{
    string s="IX";
   int ans= romanToInt(s);
   cout<<ans<<endl;
}