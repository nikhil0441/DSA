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
int serach2(vector<int>arr,int n,int k){
    int left=0,right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==k){
            return mid;
        }
        if(arr[left]<=arr[mid]){
            if(k>=arr[left] && k<=arr[mid]){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        else{
            if(k>=arr[mid] && k<=arr[right]){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
    }
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