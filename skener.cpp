#include <iostream>
using namespace std;

int r, c, zr, zc;

int main() {
  cin >> r >> c >> zr >> zc;
  string ss[r];
  for (int i = 0; i < r; i++) {
    cin >> ss[i];
  }
  for (int i = 0; i < r; i++) {
    for (int l = 0; l < zr; l++) {
      for (int j = 0; j < c; j++) {
        for (int k = 0; k < zc; k++) {
          cout << ss[i][j];
        }
      }
      cout << endl;
    }
  }
}