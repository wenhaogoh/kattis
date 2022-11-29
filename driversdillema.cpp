#include <iostream>
using namespace std;

double c, x, m;
double res = 0;

int main()
{
  cin >> c >> x >> m;
  for (int i = 0; i < 6; i++)
  {
    double s, e;
    cin >> s >> e;
    double t = m / s;
    double l = t * x;
    double f = m / e;
    if (c / 2 - f - l >= 0)
    {
      res = s;
    }
  }
  if (res)
  {
    cout << "YES " << res << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
}