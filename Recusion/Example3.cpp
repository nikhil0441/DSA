#include<iostream>
using namespace std;
int fact(int a){
    if(a<=1){
        return 1;
    }
    return fact(a-1)*a;
}
int main(){
    int ans=fact(5);
    cout<<ans;
}