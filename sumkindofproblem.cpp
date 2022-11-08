#include <iostream>
using namespace std;

int p, k, n, s1, s2, s3;

int main() {
  cin >> p;
  for (int i = 0; i < p; i++) {
    cin >> k >> n;
    s1 = 0, s2 = 0, s3 = 0;
    s1 = n * (n + 1) / 2;
    s3 = s1 * 2;
    s2 = s3 - n;
    cout << k << " " << s1 << " " << s2 << " " << s3 << endl;
  }
}