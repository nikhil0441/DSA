#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>mp;
    int n;
    cout<<"enter how many re"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int roll;
        string name;
        cout<<"enter roll number"<<endl;
        cin>>roll;
        cout<<"enter name"<<endl;
        cin>>name;
        mp.insert({roll,name});
        mp.insert(make_pair(roll,name));
    }
    cout<<"map all value"<<endl;
    for(auto p:mp){
        cout<<p.first<<"="<<p.second<<endl;
    }
}