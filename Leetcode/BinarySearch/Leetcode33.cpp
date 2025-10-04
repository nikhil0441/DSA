#include<iostream>
#include<vector>
using namespace std;
class Soluction{
public:
int search(vector<int>&arr,int n,int k){
    int ans=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;

}
};
int main(){
    int n;
    cout<<n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  Soluction s;
  int k;
  cout<<"enter Target"<<endl;
  cin>>k;
    int res=s.search(arr,n,k);
    cout<<"index is"<<res<<endl;
    return 0;
}