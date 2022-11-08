#include <iostream>
using namespace std;

int e, f, c;

int main()
{
  cin >> e >> f >> c;
  int t = e + f, res = 0;
  while (t >= c)
  {
    int ns = t / c;
    t = ns + t % c;
    res += ns;
  }
  cout << res << endl;
}