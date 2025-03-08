#include<iostream>
using namespace std;
class BubbleSort{
    int count=0;
    bool f=true;
    int swapcount=0;
    public :
    
     void bubble(int arr[],int n){
    //   for(int i=n-1;i>0;i--){
    //      for(int j=0;j<=i;j++){
    //          if(arr[j]>arr[j+1]){
    //              int temp=arr[j];
    //              arr[j]=arr[j+1];
    //              arr[j+1]=temp;
    //          }
    //      }
    //   }

      for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < n-i-1; j++)
         {   
             count++;
        if (arr[j] > arr[j + 1])
             { 
                swapcount++;
             int temp = arr[j];
                 arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                 f=false;
            }
    }
        cout << "step " << i + 1 << " swap is=:" << swapcount << endl;
        swapcount = 0;
       if(f==true){
            break;
        }
    
     }
       cout<<"count is="<<count<<endl;
    }
   
};
int main(){  //driver code
int a[]={12,5,3,6,34};
int n=sizeof(a)/sizeof(a[0]);
BubbleSort p;
// p.show(a,n);
p.bubble(a,n);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
}