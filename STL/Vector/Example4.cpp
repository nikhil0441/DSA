#include <iostream>
#include <vector>
#include <iterator>
#include<algorithm>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);


    // int x;
    // cout<<"enter search value in vector"<<endl;
    // cin>>x;
    // auto j=find(v.begin(),v.end(),x);
    // cout<<*j<<endl;
    // v.erase(j);
    // for(auto p:v){
    //     cout<<p<<"\t"<<endl;
    // }
    reverse(v.begin(),v.end());
    for (auto p : v)
    {
        cout << p << "\t" << endl;
    }
    cout<<"min value is"<<*min_element(v.begin(),v.end())<<endl;
    cout << "Max value is" << *max_element(v.begin(), v.end())<<endl;
    cout<<"vector is empty="<<v.empty()<<endl;
}