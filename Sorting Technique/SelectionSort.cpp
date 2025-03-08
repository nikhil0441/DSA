#include<iostream>
using namespace std;

class SelectionSort{
public:
void selection(int arr[],int n){
   for(int i=0;i<n;i++){
    int k=i;
    for(int j=i+1;j<n;j++){
       if(arr[k]>arr[j]){
        k=j;
       }
    }
    if(k!=i){
        int temp=arr[i];
        arr[i]=arr[k];
        arr[k]=temp;
    }
   }
}
};

int main(){
    SelectionSort s;
   int a[]={67,39,2,6,58,89};
   int n=sizeof(a)/sizeof(a[0]);
   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }
   cout<<endl;
   s.selection(a,n);
   for (int i = 0; i < n; i++)
   {
       cout << a[i] << " ";
   }

}