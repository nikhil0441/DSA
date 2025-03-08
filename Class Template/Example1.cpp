#include<iostream>
using namespace std;

template<typename t1>
class Cybrom{
    public:
    t1 show(t1 a){
        return ++a;
    }
};
int main(){
    Cybrom<int>obj;
    cout<<obj.show(7);
    Cybrom<double>obj1;
    cout<<obj1.show(5.9);
}