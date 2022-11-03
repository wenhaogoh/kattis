#include <iostream>
#include <iomanip>
using namespace std;

double n, pt, pv, t, v, a;

int main()
{
  cin >> n >> pt >> pv;
  while (n > 1)
  {
    cin >> t >> v;
    a += ((v + pv) / 2.0) * (t - pt);
    pv = v;
    pt = t;
    n--;
  }
  cout << fixed << setprecision(7) << a / 1000 << endl;
}