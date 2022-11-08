#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

vector<pair<int, pair<int, int>>> v;

int n;
pair<int, int> p;
double res;

int main()
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> n;
      v.push_back({n, {i, j}});
    }
  }
  sort(v.begin(), v.end());
  p = v.front().second;
  for (int i = 1; i < v.size(); i++)
  {
    pair<int, int> np = v[i].second;
    res += sqrt((p.first - np.first) * (p.first - np.first) + (p.second - np.second) * (p.second - np.second));
    p = np;
  }
  cout << fixed << setprecision(10) << res << endl;
}