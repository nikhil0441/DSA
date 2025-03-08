#include<iostream>
#include<vector>
using namespace std;
int main(){
    // int arr[]={0,2,20,1};
    // int fl=0;
    // int sl=0;
    // for(int i=0;i<4;i++){
    //     if(arr[i]>fl){
    //         fl=arr[i];
    //     //  sl=fl;
    //         // sl=fl;
    //     }
    // }
    // cout<<fl;
    // for(int i=0;i<4;i++){
    //     if(arr[i]>sl && arr[i]<fl){
    //         sl=arr[i];
    //     }
    // }
    // cout<<sl;
    cout<<"enter length of vector"<<endl;
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int firstLargest=0,secondLargest=0;
    if(v.size()<=1){
        cout<<"their is no elements"<<endl;
    }
    for(int i=0;i<v.size();i++){
        if(v[i]>firstLargest){
            secondLargest=firstLargest;
            firstLargest=v[i];
        }else if(v[i]>secondLargest && v[i]!=firstLargest){
            secondLargest=v[i];
        }
    }
    if(secondLargest==0){
        cout<<"their is no secondlargest"<<endl;
    }
    else{
        cout << firstLargest << " " << secondLargest;
    }
    
}