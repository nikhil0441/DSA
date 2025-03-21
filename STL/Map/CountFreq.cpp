#include<iostream>
#include<map>
using namespace std;
void occure(string s){
    map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    for(auto p:mp){
        cout<<p.first<<"="<<p.second<<endl;
    }
}
int main(){
    string s="welcome";
    occure(s);
}