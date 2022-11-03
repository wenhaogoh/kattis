#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

int n;
string s;
double a, b, m = 100;
vector<pair<pair<double, double>, string>> v;
vector<string> mn;

int main()
{
  cin >> n;
  while (n > 0)
  {
    cin >> s >> a >> b;
    v.push_back({{b, a}, s});
    n--;
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++)
  {
    vector<string> names;
    names.push_back(v[i].second);
    double t = v[i].first.second;
    int c = 0;
    for (int j = 0; j < v.size(); j++)
    {
      if (c == 3)
        break;
      if (i == j)
        continue;
      t += v[j].first.first;
      names.push_back(v[j].second);
      c++;
    }
    if (t < m)
    {
      m = t;
      mn = names;
    }
  }
  cout << fixed << setprecision(10) << m << endl;
  for (auto &name : mn)
  {
    cout << name << endl;
  }
}