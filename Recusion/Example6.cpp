#include<iostream>
using namespace std;
int power(int num,int pow){
    if(pow==0){
        return 1;
    }
    if(pow==1 ){
        return num;
    }
    return num*power(num,pow-1);
}
int main(){
    int base,pow;
    cout<<"enter a base"<<endl;
    cin>>base;
    cout<<"enter a power"<<endl;
    cin>>pow;
    cout<<power(base,pow);

}  