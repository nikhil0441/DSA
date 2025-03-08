#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>>v1;
    int row,col,v;
    cout<<"enter no of row\n"<<endl;
    cin>>row;
    cout << "enter no of columns\n"<< endl;
    cin >> col;
    for(int i=0;i<row;i++){
        vector<int>v2;
        for(int j=0;j<col;j++){
             cout<<"enter value:"<<i<<" "<<j<<endl;
             cin>>v;
             v2.push_back(v);

        }
        v1.push_back(v2);
    }
    cout<<"vector value"<<endl;
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v1[i].size(); j++)
        {
            cout << v1[i][j] << "\t";
        }
        cout << endl;
    }
}