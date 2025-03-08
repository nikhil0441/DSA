#include<iostream>
using namespace std;
void table(int num,int n){
    if(n==0){
        return ;
    }
    table(num,n-1);
    cout<<num<<"*"<<n<<"="<<(num*n)<<endl;
}
int main(){
    int num;
    cin>>num;
    table(num,10);
}