#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, s, total;
vector<pair<int, int>> v;

int main()
{
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> s;
    total += s;
    v.push_back({s, i});
  }
  sort(v.rbegin(), v.rend());
  if (v[0].first * 2 > total)
  {
    cout << "impossible" << endl;
    return 0;
  }
  for (auto &vi : v)
  {
    cout << vi.second << " ";
  }
  cout << endl;
}