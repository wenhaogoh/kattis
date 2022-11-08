#include <iostream>
using namespace std;

string x, y;
int xc, yc;

int main() {
  cin >> x >> y;
  for (auto& c : x) {
    if (c == 'S') {
      xc++;
    }
  }
  for (auto& c : y) {
    if (c == 'S') {
      yc++;
    }
  }
  int tc = xc * yc;
  for (int i = 0; i < tc; i++) {
    cout << "S(";
  }
  cout << 0;
  for (int i = 0; i < tc; i++) {
    cout << ")";
  }
  cout << endl;
}