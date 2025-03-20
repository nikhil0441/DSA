//Map:(key and value)
//1.It is an associate(key and value) container
//2.It contains key and value
//3.It is sorted by default
//4.key is always unique
//5.Self balance binary serach tree or Red Black Tree maintain the lexicography order
//6.There are 3 types of map
    //(i) ordered map(sorted)(Red Black Tree)
    //(ii)unordered map(unsorted)(Hashing technique)
    //(iii) multimap(duplicate values allowed)



#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>student{{101,"nikhil"},{102,"harshal"},{100,"vansh"},{89,"sumit"}};
    for(auto p:student){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;                                  //p=p+1 are not allowed in map because map used pointer
    for(auto p=student.begin();p!=student.end();p++){
        cout<<p->first<<" "<<p->second<<endl;
    }

}