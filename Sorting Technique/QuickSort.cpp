#include<iostream>
using namespace std;

class Quick{
 
 public:
 int divide(int arr[],int low,int high){
   int pivot=arr[low];//9
   int i=low+1;//1
   int j=high;//4
   do{
       while(arr[i]<pivot){
        i++;
       }
       while(arr[j]>pivot){
        j--;
       }
       if(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
       }
   }while(i<=j);

   int temp=arr[low];
   arr[low]=arr[j];
   arr[j]=temp;
   return j;

 }
  void quicksort(int arr[],int low ,int high){
   int pivot;
   if(low<high){
    pivot=divide(arr,low,high);
     quicksort(arr,low,pivot-1);
     quicksort(arr,pivot+1,high);
   }
  }
};



int main(){
    Quick q;

    int a[] = {23, 464, 64, 2, 56, 32, 1};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "before sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";

   }
  
   
   q.quicksort(a,0,n-1);
   
   cout << "After sorting" << endl;
   for (int i = 0; i < n; i++)
   {
       cout << a[i] << " ";
   }
}