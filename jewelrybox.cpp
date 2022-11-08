#include <iostream>
#include <iomanip>
using namespace std;

int t;
double x, y;

int main() {
  cin >> t;
  for (int i = 0; i < t; i++) {
    double m = 0;
    cin >> x >> y;
    if (x > y) {
      swap(x, y);
    }
    double lo = 0;
    double hi = x / 2;
    while (lo < hi) {
      double mid = lo + (hi - lo) / 2;
      double midlo = mid - 0.0000001;
      double midhi = mid + 0.0000001;
      double v = (x - 2 * mid) * (y - 2 * mid) * mid;
      double vl = (x - 2 * midlo) * (y - 2 * midlo) * midlo;
      double vh = (x - 2 * midhi) * (y - 2 * midhi) * midhi;
      if (v > vl && v < vh) {
        cout << fixed << setprecision(9) << v << endl;
        return 0;
      } else if (v > vh) {
        hi = mid;
      } else {
        lo = mid;
      }
    }
  }
}