#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double x1, y11, x2, y2;

int main() {
  cin >> x1 >> y11 >> x2 >> y2;
  cout << fixed << setprecision(3) << abs(x1 - x2) * abs(y11 - y2) << endl;
}