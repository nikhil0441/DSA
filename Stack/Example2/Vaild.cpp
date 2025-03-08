#include<iostream>
#include<stack>
using namespace std;
bool isvaild(string s){
    if(s.size()%2!=0)
    return false;
    stack<char>st;
    bool r = true;
    for(int i=0;i<s.size();i++){
        
           if(s[i]=='{' || s[i]=='(' || s[i]=='['){
            st.push(s[i]);  
         }
         else if(s[i]=='}'){
            if(!st.empty() && st.top()=='{'){
               st.pop();
            }
            else{
                r=false;
                break;
            }
         }
         else if(s[i]==')'){
             if (!st.empty() && st.top() == '(')
             {
                 st.pop();
             }
             else
             {
                 r = false;
                 break;
             }
         }
         else if(s[i]==']'){
             if (!st.empty() && st.top() == '[')
             {
                 st.pop();
             }
             else
             {
                 r = false;
                 break;
             }
         }
        }
        
           if(r && st.empty())
           return true;
           else 
           return false;
}

int main(){
    string s;
    cout<<"enter a string"<<endl;
    cin>>s;
    bool ans=isvaild(s);
    if(ans){
        cout<<"Vaild"<<endl;
    }
    else{
        cout<<"Invaild"<<endl;
    }


}