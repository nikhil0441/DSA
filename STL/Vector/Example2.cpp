#include <iostream>
#include <vector>
#include<iterator>
using namespace std;
int main(){
    // vector<int>v(5,20);
    // v[0]=45;
    // v[2]=59;
    // v[4]=69;
    // cout<<"size of v:"<<v.size()<<endl;
    // for(auto a:v){
    //     cout<<a<<"\t";
    // } 
    int n;
    cin>>n;
    vector<int>ans;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        ans.push_back(a);
        // cin>>ans[i];

    }
    for(auto p:ans){
        cout<<p<<"\t";
    }
    ans.pop_back();
    for (auto p : ans)
    {
        cout << p << "\t";
    }
    vector<int>::iterator it=ans.begin();
    ans.insert(it+2,400);
    for (auto p : ans)
    {
        cout << p << "\t";
    }
}
