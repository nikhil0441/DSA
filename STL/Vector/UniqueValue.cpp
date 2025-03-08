#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void Unique(vector<int> &v)
{
    int x=1;
    for(int i=1;i<v.size();i++){
        if(v[x-1]!=v[i]){
            v[x]=v[i];
            x++;
        }
    }
    for(int i=0;i<x;i++){
        cout<<v[i]<<" ";
    }
    
}
int main()
{
    int n;
    cout << "enter length of vector" << endl;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "enter value" << endl;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
     Unique(v);
    
}