#include <iostream>
using namespace std;

int n, m;
string k, t;

int main() {
  cin >> n >> m >> k >> t;
  for (size_t i = k.length() - 1; i >= 0; i--) {
    size_t j = t.length() - 1 - i;
    char kj = t[j] + k[j];
  }
}