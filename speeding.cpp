#include <iostream>
using namespace std;

int n, pt, pd, t, d, m;

int main()
{
  cin >> n >> pt >> pd;
  n--;
  while (n > 0)
  {
    cin >> t >> d;
    m = max(m, (d - pd) / (t - pt));
    pd = d;
    pt = t;
    n--;
  }
  cout << m << endl;
}