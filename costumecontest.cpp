#include <iostream>
#include <unordered_map>
#include <set>
using namespace std;

int n, m = 1000;
string s;
unordered_map<string, int> um;
set<string> st;

int main()
{
  cin >> n;
  while (n--)
  {
    cin >> s;
    if (um.find(s) == um.end())
    {
      um[s] = 1;
    }
    else
    {
      um[s]++;
    }
  }
  for (auto &kv : um)
  {
    m = min(m, kv.second);
  }
  for (auto &kv : um)
  {
    if (kv.second == m)
    {
      st.insert(kv.first);
    }
  }
  for (auto &cat : st)
  {
    cout << cat << endl;
  }
}