#include <iostream>
#include <iomanip>
using namespace std;

double a, b, c, i, j, k;

int main()
{
  cin >> a >> b >> c >> i >> j >> k;
  double m = min(a / i, min(b / j, c / k));
  cout << fixed << setprecision(6) << a - m * i << " " << b - m * j << " " << c - m * k << endl;
}