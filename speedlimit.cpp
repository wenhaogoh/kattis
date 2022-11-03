#include <iostream>
using namespace std;

int n, pt, s, t, ts;

int main()
{
  while (cin >> n && n != -1)
  {
    ts = 0, pt = 0;
    while (n > 0)
    {
      cin >> s >> t;
      ts += s * (t - pt);
      pt = t;
      n--;
    }
    cout << ts << " miles" << endl;
  }
}