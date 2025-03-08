#include<iostream>
using namespace std;

int sum(int num)
{
    if(num==0)
    {
        return 1;
    }
    return num+sum((num-1));
    // cout<<num;
}
int main()
{
    cout<<sum(5);
}