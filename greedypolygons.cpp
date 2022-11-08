#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int tc, n, l, d, g;

int main() {
  cin >> tc;
  for (int i = 0; i < tc; i++) {
    cin >> n >> l >> d >> g;
    cout << fixed << setprecision(14) <<
      n * g * d * l +
      M_PI * (g * d) * (g * d) +
      n * l * (l / (2 * tan(M_PI / n))) / 2
      << endl;
  }
}