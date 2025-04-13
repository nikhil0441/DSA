
#include<iostream>
using namespace std;

class Solution
{
public:
    int findClosest(int x, int y, int z)
    {
        int a = (z - x);
        int b = (y - z);
        if (a > b)
        {
            return 2;
        }
        return 1;
    }
};
int main(){
    Solution s;
    cout<<s.findClosest(2,5,6);
}