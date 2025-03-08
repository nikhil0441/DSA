#include<iostream>
using namespace std;
void show(int a)
{
    if(a==0){ // base condition
        return ;
    }
    // show(a-1);
    // cout<<a<<"\t";// tail recursion

    cout << a << "\t"; // head recursion
    show(a-1); //recursion realtionship
}
int main(){
    show(5);
}