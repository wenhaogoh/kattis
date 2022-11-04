#include <iostream>
using namespace std;

long l, n, a, d, res = 1;

int main()
{
  cin >> l >> n;
  a = l % n;
  while (a != 0)
  {
    n = n - a;
    a = l % n;
    res++;
  }
  cout << res << endl;
}