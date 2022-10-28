#include <iostream>
#include <cmath>
using namespace std;

string s;
int xmax, xmin, ymax, ymin, l;

int main() {
  cin >> s;
  l = s.length();
  xmin = 0;
  ymin = 0;
  xmax = pow(2, l) - 1;
  ymax = pow(2, l) - 1;
  for (auto& c : s) {
    switch (c) {
      case '0':
        xmax = xmax - (xmax - xmin) / 2;
        ymax = ymax - (ymax - ymin) / 2;
        break;
      case '1':
        xmin = xmin + (xmax - xmin + 1) / 2;
        ymax = ymax - (ymax - ymin) / 2;
        break;
      case '2':
        xmax = xmin + (xmax - xmin) / 2;
        ymin = ymin + (ymax - ymin + 1) / 2;
        break;
      case '3':
        xmin = xmin + (xmax - xmin + 1) / 2;
        ymin = ymin + (ymax - ymin + 1) / 2;
        break;
    }
  }
  cout << l << " " << xmin << " " << ymin << "\n";
}