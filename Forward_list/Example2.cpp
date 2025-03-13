//Doubley linked list is called list
// insertation or delations are both side
//undirected graph
#include<bits/stdc++.h>
// #include<iostream>
// #include<list>
// #include<algorithm>

using namespace std;

int main(){
  list<int>l1;
  l1.push_front(1);
  l1.push_front(2);
  l1.push_front(3);
  l1.push_front(4);
  //   l1.push_front(10);
  //   l1.push_front(20);
  //   l1.push_front(30);
  //   for(auto p:l1){
  //     cout<<p<<"\t";
  //   }
  //   l1.push_back(40);
  //   l1.push_front(50);
  //   cout<<endl;
  //   for (auto p : l1)
  //   {
  //       cout << p << "\t";
  //   }
  //   cout<<endl;
  //   l1.pop_back();
  //   l1.pop_front();
  //   for (auto p : l1)
  //   {
  //       cout << p << "\t";
  //   }

  auto it = l1.begin();
  // delete a given position elements
 // advance(it, 2);
 // l1.erase(it);
  for(auto p:l1){
    cout<<p<<'\t';
  }
  // add a new elements in given position
advance(it,3);
l1.insert(it,50);
cout<<endl;

for (auto p : l1)
{
    cout << p << '\t';
}

// update given value
auto it3=l1.begin();
advance(it3,3);
*it3=8000;
cout<<endl;
for(auto p:l1){
    cout<<p<<"\t";
}




/// found the elements in list
  auto t=find(l1.begin(),l1.end(),1);

  if(t!=l1.end()){
      cout << "element are found " << *t << endl;
  }
  else{
    cout<<"not found"<<*t<<endl;
  }

}