#include<iostream>
#include<vector>
using namespace std;
// class Solution
// {
// public:
//     int numOfSubarrays(vector<int> &arr)
//     { 
//         int count=0;
//           for(int i=0;i<arr.size();i++){
//                for(int j=i;j<arr.size();j++){
//                 int sum=0;
//                 for(int k=i;k<=j;k++){
//                     sum+=arr[k];
//                 }
//                 if(sum%2!=0){
//                     count++;
//                 }
//                }
//           }
//           return count;
//     }
    
// };
#include <vector>
#include <iostream>
using namespace std;
#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    int numOfSubarrays(vector<int> &arr)
    {
        int count = 0;
        const int MOD = 1e9 + 7; // Modulo value

        for (int i = 0; i < arr.size(); i++)
        {
            int sum = 0;
            for (int j = i; j < arr.size(); j++)
            {
                sum += arr[j];
                if (sum % 2 != 0)
                {
                    count++;
                    count %= MOD; // Take modulo for each increment to prevent overflow
                }
            }
        }

        return count;
    }
};

int main()
{
    vector<int> a = {1, 3, 5};
    Solution s;
    cout << s.numOfSubarrays(a); // Expected output: 4
    return 0;
}
