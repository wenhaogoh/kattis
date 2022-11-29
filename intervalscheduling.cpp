#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, res, s, f, earliest;
vector<pair<int, int>> v;

bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
  return (a.second < b.second);
}

int main()
{
  cin >> n;
  while (n--)
  {
    cin >> s >> f;
    v.push_back({s, f});
  }
  sort(v.begin(), v.end(), sortbysec);
  for (auto &interval : v)
  {
    if (interval.first >= earliest)
    {
      res++;
      earliest = interval.second;
    }
  }
  cout << res << endl;
}