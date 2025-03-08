#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,7>arr{1,2,3,4,5,6,7};
    // for(int i:arr){
    //     cout<<i<<"\t";
    // }
    for(int i=0;i<arr.size();i++){
        cout<<arr.at(i)<<"\t";
    }
}