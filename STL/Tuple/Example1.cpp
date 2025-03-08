#include<iostream>
#include<vector>
#include<tuple>
using namespace std;
int main(){
//     tuple<int,string,int>t{101,"joy",21};
//     t=make_tuple(102,"honey",22);
//     cout<<"Roll_number is:"<<get<0>(t)<<endl;
//     cout << "Name  is:" << get<1>(t) << endl;
//     cout << "Age is:" << get<2>(t) << endl;

     vector<tuple<int,string,int>>t;
     int n;
     cout<<"how much recoders"<<endl;
     cin>>n;
     for(int i=0;i<n;i++){
        int roll,age;string name;
        cout<<"enter roll Number"<<endl;
        cin>>roll;
        cout << "enter  Name" << endl;
        cin >> name;
        cout << "enter age" << endl;
        cin >> age;
        t.push_back({roll,name,age});
     }
     for(int i=0;i<t.size();i++){
         cout << "roll number is:" << get<0>(t[i]) << "name is:" << get<1>(t[i]) << "age is:" << get<2>(t[i]) << endl;
        //  cout << "name is:" << get<1>(t[i]) << endl;
        //  cout << "age is:" << get<2>(t[i]) << endl;
     }

}