#include<iostream>
using namespace std;
class Arrays{

public:
void show(int arr[],int s){
 
 if(s==0){
    cout<<"no data";
    return ;
 }
 for(int i=0;i<s;i++){
    cout<<arr[i];
    if(s!=i+1){
        cout<<",";
    }
 }
}

};
int main(){
 int a[]={2,4,2,4,3};
 int n=sizeof(a)/sizeof(a[0]);
 Arrays obj;
 obj.show(a,n);
}