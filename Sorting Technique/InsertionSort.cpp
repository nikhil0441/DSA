#include<iostream>
using namespace std;
class insertSort{
    public:
    void insert(int arr[],int s){
         
         for(int i=1;i<s;i++){
            int j=i;
            while(j>0 && arr[j]<arr[j-1]){
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                j--;
            }
         }
    }
};
int main(){
    int a[]={2,4,1,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    insertSort s;
    s.insert(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "; 
    }
}