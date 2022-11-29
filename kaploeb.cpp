#include <iostream>
#include <unordered_map>
#include <set>
using namespace std;

unordered_map<int, pair<int, int>> um;
set<pair<pair<int, int>, int>> res;
int l, k, s, n;
string t;

int convertToSeconds(string s)
{
  return stoi(s.substr(0, 2)) * 60 + stoi(s.substr(3, 2));
}

int main()
{
  cin >> l >> k >> s;
  while (l--)
  {
    cin >> n >> t;
    if (um.find(n) == um.end())
    {
      um[n] = {convertToSeconds(t), 1};
    }
    else
    {
      um[n].first += convertToSeconds(t);
      um[n].second++;
    }
  }
  for (auto &kv : um)
  {
    if (kv.second.second == k)
    {
      res.insert({kv.second, kv.first});
    }
  }
  for (auto &si : res)
  {
    cout << si.second << endl;
  }
}