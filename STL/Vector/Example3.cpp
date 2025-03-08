#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(10);
    v.push_back(100);
    vector<int>::iterator it=v.begin();
    v.insert(it,23);
    for(auto p:v){
        cout<<p<<" "<<"\t";
    }
    cout<<endl;
    v.erase(it+2);
    v.pop_back(); 
    for (auto p : v)
    {
        cout << p << " \t" ;
    }
}