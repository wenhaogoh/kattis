#include <iostream>
using namespace std;

int a, b, c;

int main() {
  cin >> a >> b >> c;
  cout << max(b - a, c - b) - 1 << endl;
}