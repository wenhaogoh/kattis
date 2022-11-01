#include <iostream>
using namespace std;

int n, a, b, c;

int main()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a >> b >> c;
    cout << (a + b == c ||
                     a * b == c ||
                     a - b == c ||
                     b - a == c ||
                     c * a == b ||
                     c * b == a
                 ? "Possible"
                 : "Impossible");
    cout << "\n";
  }
}