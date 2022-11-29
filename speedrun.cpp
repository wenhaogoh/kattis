#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int, int> ii;

int g, n, a, b, res;
vector<ii> v;

bool sortBySecond(const ii &a, const ii &b)
{
  return a.second < b.second;
}

int main()
{
  cin >> g >> n;
  while (n--)
  {
    cin >> a >> b;
    v.push_back({a, b});
    sort(v.begin(), v.end(), sortBySecond);
  }
  int end = 0;
  for (auto &vi : v)
  {
    if (vi.first >= end)
    {
      res++;
      end = vi.second;
      if (res >= g)
      {
        cout << "YES" << endl;
        return 0;
      }
    }
  }
  cout << "NO" << endl;
}