#include <iostream>
#include <iomanip>
using namespace std;

double x, y, n, l, u, f;

int main()
{
  cin >> x >> y >> n;
  double t = y;

  while (n--)
  {
    cin >> l >> u >> f;
    t -= (u - l);
    t += (u - l) * f;
  }
  cout << fixed << setprecision(11) << x / t << endl;
}