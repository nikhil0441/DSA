#include <iostream>
#include <unordered_map>
// #include <algorithm>
using namespace std;
int main()
{
   unordered_map<int, string> mp;
    int n;
    cout << "enter how many re" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int roll;
        string name;
        cout << "enter roll number" << endl;
        cin >> roll;
        cout << "enter name" << endl;
        cin >> name;
        mp.insert({roll, name});
        mp.insert(make_pair(roll, name));
    }
    cout << "map all value" << endl;
    for (auto p : mp)
    {
        cout << p.first << "=" << p.second << endl;
    }
    int roll;
    cout << "enter serach roll number" << endl;
    cin >> roll;
    // auto ans=find(mp.begin(),mp.end(),roll);
    auto ans = mp.find(roll);
    if (ans != mp.end())
    {
        cout << "found " << ans->first << ":" << ans->second << endl;
    }
    else
    {
        cout << " not found" << endl;
    }
    int del;
    cout << "enter delete roll number" << endl;
    cin >> del;
    mp.erase(roll);
}