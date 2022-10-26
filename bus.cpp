#include <iostream>
#include <iomanip>
using namespace std;

int t, k;
double n;

int main() {
 cin >> t;
 for (int i = 0; i < t; i++) {
  cin >> k;
  n = 0;
  for (int j = 0; j < k; j++) {
    n = (n + 0.5) * 2;
  }
  cout << fixed << setprecision(0) << n << "\n";
 }
}