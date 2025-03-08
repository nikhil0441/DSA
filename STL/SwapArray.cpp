#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> a{34, 34, 3, 1, 8};
    array<int,5>b{48,23,1,45,7};
    
    a.swap(b);
    // swap(a,b);
    for(auto p:a){
        cout<<p<<"\t";
    }
    cout<<endl;
    for (auto p : b)
    {
        cout << p << "\t";
    }
}