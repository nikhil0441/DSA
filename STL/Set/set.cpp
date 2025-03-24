#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> multi;

    multi.insert(10);
    multi.insert(39);
    multi.insert(55);
    multi.insert(55);
    multi.insert(55);
    multi.insert(46);

    for (auto &entry : multi)
    {
        cout << entry << endl;
    }

    multi.erase(10);

    for (auto &entry : multi)
    {
        cout << entry << endl;
    }
}