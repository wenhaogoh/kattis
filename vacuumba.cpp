#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int n, m;
double r, d;

int main()
{
  cin >> n;
  while (n > 0)
  {
    double x = 0, y = 0, a = 90;
    cin >> m;
    while (m > 0)
    {
      cin >> r >> d;
      a += r;
      if (a < 0)
      {
        a += 360;
      }
      x += d * cos(a / 180 * M_PI);
      y += d * sin(a / 180 * M_PI);
      m--;
    }
    cout << fixed << setprecision(6) << x << " " << y << endl;
    n--;
  }
}