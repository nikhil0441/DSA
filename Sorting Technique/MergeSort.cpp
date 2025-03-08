#include<iostream>
using namespace std;
class merge{
    void mergeElements(int arr[],int low,int high,int mid){
        int temp[high+1];
        int i=low,j=mid+1,k=0;
        while(i<=mid && j<=high){
            if(arr[i]<arr[j]){
                temp[k++]=arr[i++];
                // i++;
                // k++;
            }
            else{
                temp[k++]=arr[j++];
            //     j++;
            // k++;
            }
        }
        while(i<=mid){
            temp[k++]=arr[i++];
            // i++;
            // k++;
        }
        while(j<=high){
            temp[k++]=arr[j++];
            // j++;
            // k++;
        }
        for(int i=0;i<k;i++){
              arr[low+i]=temp[i];
        }
    }
public:
void mergeSort(int arr[] ,int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        mergeElements(arr,low,high,mid);
    }

}
};


int main(){
    merge m;
    int a[]={6,9,1,5,1};
    int s=sizeof(a)/sizeof(a[0]);
    cout<<"befor Sorting"<<endl;
    for(int i=0;i<s;i++){
        cout<<a[i]<<"\t";
    }
    m.mergeSort(a,0,s-1);

    cout << "After Sorting" << endl;
    for (int i = 0; i < s; i++)
    {
        cout << a[i] << "\t";
    }
}