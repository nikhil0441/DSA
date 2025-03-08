#include<iostream>
using namespace std;
int vaild(string s){
    if(s.length()>4)
    return 1;
    else
    return 0;
}
int main(){
    string name;
    cout<<"enter name"<<endl;
    cin>>name;
      int ans=vaild(name);
      if(ans)
      cout<<"vaild name";
      else{
        cout<<"invaild Name";
      }
}