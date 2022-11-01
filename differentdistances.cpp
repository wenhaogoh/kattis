#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double x, y, xx, yy, p;

int main()
{
  while (cin >> x && x != 0)
  {
    cin >> y >> xx >> yy >> p;
    cout << fixed << setprecision(10) << pow(pow(abs(x - xx), p) + pow(abs(y - yy), p), 1 / p) << "\n";
  }
}