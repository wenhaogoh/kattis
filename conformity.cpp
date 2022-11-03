#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int n, c, m, res;
unordered_map<string, int> um;

int main()
{
  cin >> n;
  while (n > 0)
  {
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
      cin >> c;
      v.push_back(c);
    }
    sort(v.begin(), v.end());
    string cs = "";
    for (auto &vi : v)
    {
      cs += to_string(vi);
    }
    if (um.find(cs) == um.end())
    {
      um[cs] = 0;
    }
    um[cs]++;
    m = max(m, um[cs]);
    n--;
  }
  for (auto &kv : um)
  {
    if (kv.second == m)
    {
      res += kv.second;
    }
  }
  cout << res << endl;
}