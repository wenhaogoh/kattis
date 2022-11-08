#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double a, b, s, m, n;

int main()
{
  while (cin >> a >> b >> s >> m >> n && a + b + s + m + n != 0)
  {
    double ad = a * m, bd = b * n;
    double av = ad / s, bv = bd / s;
    double v = sqrt(av * av + bv * bv);
    double a = 90 - (atan(av / bv) / M_PI) * 180;
    cout << fixed << setprecision(2) << a << " " << v << endl;
  }
}