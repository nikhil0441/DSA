// Singlee linked list is called as Forward List and Doublee linked list is called as List.
// In directed graph we use Forward list. single or uni direction

#include <iostream>
using namespace std;
#include <forward_list>
int main()
{
  forward_list<int> f;
  f.push_front(12);
  f.push_front(45);
  f.push_front(56);
  f.push_front(45);
  f.push_front(78);
  forward_list<int> f2;
  f2.push_front(89);
  f2.push_front(4);
  f2.push_front(9);
  f2.push_front(19);
  f2.push_front(69);
  for (auto p : f)
  {
    cout << p << "\t";
  }
  f.pop_front();
  cout << endl;
  for (auto p : f)
  {
    cout << p << "\t";
  }
  cout << endl;
  cout << "Size =" << distance(f.begin(), f.end());
  cout << "\n";
  f.reverse();
  for (auto p : f)
  {
    cout << p << "\t";
  }
  f.sort();
  f.unique();
  cout << "\n Unique value\n";
  for (auto p : f)
  {
    cout << p << "\t";
  }
  cout << "\n";
  f.sort();
  f2.sort();
  f.merge(f2);
  for (auto p : f)
  {
    cout << p << "\t";
  }
}