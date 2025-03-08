#include<iostream>
#include<stack>

using namespace std;
int main(){
    stack<int>st;
    st.push(200);
    st.push(30);
    st.push(40);
    st.push(5);
    st.push(3);
    // int minValue=INT_MAX;
    int minValue=st.top();
    int maxValue=st.top();
    while(!st.empty()){
        minValue=min(minValue,st.top());
        maxValue=max(maxValue,st.top());
        st.pop();
    }
    cout<<minValue<<endl;
    cout<<maxValue<<endl;
}