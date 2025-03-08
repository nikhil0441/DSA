#include<iostream>
using namespace std;
int fib(int a){
    // a=a+1;
    if(a==0 || a==1){
        return a;
    }
    // if(a==1){
    //     return a;
    // }
    return fib(a-1)+fib(a-2);
}
int main(){
   int ans= fib(5);
   cout<<ans;
}