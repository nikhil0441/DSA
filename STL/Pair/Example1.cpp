
// pair it is a pre define structure template,that store only 2 values and at the first is access is first key word and second value acces is second keyword
//we can use make_pair() function to insert the record in a pair


#include<iostream>
#include<vector>
using namespace std;
int main(){
    // pair<int,string>p{101,"nikhil"};
    // p=make_pair(102,"Harshal");
    // cout<<p.first<<" "<<p.second<<endl;
    vector<pair<int,string>>ans;
    int n;
    cout<<"enter how much recodes"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;string name;
        cout<<"enter roll number"<<endl;
        cin>>x;
        cout<<"enter name"<<endl;
        cin>>name;
        ans.push_back({x,name});
    }
    for(auto p:ans){
        cout<<p.first<<" "<<p.second<<endl;
    }
}