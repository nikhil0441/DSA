// Singlee linked list is called as Forward List and Doublee linked list is called as List.
// In directed graph we use Forward list. single or uni direction

#include<iostream>
#include<forward_list>
using namespace std;
int main(){

  forward_list<int>f;
  f.push_front(100);
  f.push_front(80);
  f.push_front(60);
  f.push_front(40);
  f.push_front(20);
   for(auto p:f){
    cout<<p<<"\t";
   }
   f.pop_front();
   cout<<endl;
   for (auto p : f)
   {
       cout << p << "\t";
   }
   cout<<"\n"<<distance(f.begin(),f.end());
}