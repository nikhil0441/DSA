#include<iostream>
using namespace std;
class stackk{
public:
int *arr;
int top,n;
stackk(int s){
    n=s;
    arr=new int[n];
    top=-1;
}
void pushh(int x){
    if(top==n-1){
    cout<<"stack is overflow"<<endl;
    return ;
    }
    top++;;
    arr[top]=x;
}
int popp(){
    if(top==-1){
        cout<<"underflow"<<endl;
        return 0;
    }
    return top--;
}
int topp(){
    if(top==-1){
        cout<<"no elements"<<endl;
        return 0;
    }
    return arr[top];
}
};
int main(){
    int n;
    cout<<"enter length of stack"<<endl;
    cin>>n;
    stackk s(n);
    for(int i=0;i<n;i++){
        int x;
        cout<<"enter value"<<endl;
        cin>>x;
        s.pushh(x);
    }
    // cout<<"stack all value"<<endl;

        // cout<<"top value is"<<s.topp()<<endl;
        while(s.top!=-1){
            cout<<s.topp()<<"\t";
            s.popp();
        }
    
}