#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int x, y, x1, y11, x2, y2, x3, y3;

int main() {
  cin >> x >> y >> x1 >> y11 >> x2 >> y2;
  x3 = x > x2 ? x2 : x < x1 ? x1 : x;
  y3 = y > y2 ? y2 : y < y11 ? y11 : y;
  cout << fixed << sqrt((x3 - x) * (x3 - x) + (y3 - y) * (y3 - y)) << endl;
}