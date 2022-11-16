#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double x, y;
vector<pair<double, double>> v;

double getDistance(pair<double, double>, pair<double, double>);

int main()
{
  for (int i = 0; i < 3; i++)
  {
    cin >> x >> y;
    v.push_back({x, y});
  }

  if (getDistance(v[0], v[1]) == getDistance(v[0], v[2]))
  {
    swap(v[0], v[1]);
  }
  else if (getDistance(v[0], v[2]) == getDistance(v[1], v[2]))
  {
    swap(v[2], v[1]);
  }
  x = v[0].first + (v[2].first - v[1].first);
  y = v[0].second + (v[2].second - v[1].second);
  cout << x << " " << y << endl;
}

double getDistance(pair<double, double> p1, pair<double, double> p2)
{
  return sqrt((p1.first - p2.first) * (p1.first - p2.first) + (p1.second - p2.second) * (p1.second - p2.second));
}