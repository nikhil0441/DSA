#include <iostream>
#include <vector>

using namespace std;
void sum(vector<int> v1, vector<int> v2)
{
    int sum1=0,sum2=0;
    for (int i = 0; i < v1.size(); i++)
    { 
        sum1+=v1[i];
        sum2+=v2[i];
        
    }
    if(sum1>sum2)
    cout<<"sum1 is greater:"<<sum1<<endl;
    else
        cout << "sum2 is greater:" <<sum2<< endl;
}
int main()
{
    vector<int> v1{1, 2, 3};
    vector<int> v2{3, 4, 5};
     sum(v1, v2);
    
}