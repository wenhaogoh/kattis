#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int n, a;

int main()
{
  while (cin >> n && n != 0)
  {
    vector<int> l1, l2, l3;
    unordered_map<int, int> um;
    for (int i = 0; i < n; i++)
    {
      cin >> a;
      l1.push_back(a);
      l3.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
      cin >> a;
      l2.push_back(a);
    }
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    for (int i = 0; i < n; i++)
    {
      um[l1[i]] = l2[i];
    }
    for (auto &c : l3)
    {
      cout << um[c] << endl;
    }
    cout << endl;
  }
}