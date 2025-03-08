#include<iostream>
#include<vector>

using namespace std;
int sum(vector<int>v1,vector<int>v2){
        
      int a=0,b=0;
      for(int i=0;i<v1.size();i++){
        a=a*10+v1[i];
        b=b*10+v2[i];
      }
      return a+b;
}
int main(){
  vector<int>v1;
  int n;
  cout<<"enter first vector length"<<endl;
  cin>>n;
  for(int i=0;i<n;i++){
    int x;
    cout<<"enter value"<<endl;
    cin>>x;
    v1.push_back(x);

  }
  vector<int>v2;
  int m;
  cout << "enter Second vector length" << endl;
  cin >> m;
  for (int i = 0; i < m; i++)
  {
    int x;
    cout << "enter value" << endl;
    cin >> x;
    v2.push_back(x);
  }
  int ans=sum(v1,v2);
  cout<<"Sum of "<<ans<<endl;
}