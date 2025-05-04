#include<iostream>
#include<vector>
using namespace std;
class Soluction{
    public:
    bool arrayGame(vector<int>&arr){
        int i=0,j=arr.size()-1;
        int alice=0,bob=0;
        bool turn=true;
        while(i<j){
           
            if(arr[j]>=arr[j]){
                if(turn){
                    alice+=arr[i++];
                }else{
                    bob+=arr[i++];
                }
            }
            else{
                if (turn)
                {
                    alice += arr[j--];
                }
                else
                {
                    bob += arr[j--];
                }
            }
            turn=!turn;
        }
        return alice>bob;
    }
};
int main(){
    vector<int>arr={1,4,1,1};
    Soluction s;
    cout<<s.arrayGame(arr);
}
