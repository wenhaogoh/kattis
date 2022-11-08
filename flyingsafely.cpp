#include <iostream>
using namespace std;

int tc, n, m, a, b;

int main()
{
  cin >> tc;
  while (tc > 0)
  {
    cin >> n >> m;
    while (m > 0)
    {
      cin >> a >> b;
      m--;
    }
    tc--;
    cout << n - 1 << endl;
  }
}