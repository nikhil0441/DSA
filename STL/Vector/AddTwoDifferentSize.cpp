#include <iostream>
#include <vector>

using namespace std;

int sum(vector<int> v1, vector<int> v2)
{
    int a=0,b=0;
    for(int i=0;i<v1.size();i++){
        a=a*10+v1[i];
    }
    for (int i = 0; i < v2.size(); i++)
    {
        b = b * 10 + v2[i];
    }
    return a+b;
}

int main()
{
    vector<int> v1{1, 2, 3, 4};
    vector<int> v2{3, 4, 5};

    int  res = sum(v1, v2);

    cout<<res;
    return 0;
}
