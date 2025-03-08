// Stack has only four function
//1.Push()
//2.POP()
//3.Empty()
//4.top()
//Stack work LIFO
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    // int n=st.size();
    // for(int i=0;i<n;i++){

    
    // cout<<st.top()<<" \t";
    // st.pop();
    // }
    while (!st.empty())
    {
        

        cout<<st.top()<<" \t";
        st.pop();
    }
    
}
