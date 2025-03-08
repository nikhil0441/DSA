#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    cout<<v.size()<<endl;
    vector<int>v2{4,2,1,7,8};
    cout << v2.size()<<endl;
    v2[2]=100;
    for(auto p:v2){
        cout<<p<<"\t";
    }
    cout<<"capacity is :"<<v2.capacity();
    cout << endl;
    v2.push_back(67);
    for (auto p : v2)
    {
        cout << p << "\t";
    }
    cout<<endl;
    cout << "capacity is :" << v2.capacity();
    v2.pop_back();
    v2.pop_back();
    for (auto p : v2)
    {
        cout << p << "\t";
    }
}