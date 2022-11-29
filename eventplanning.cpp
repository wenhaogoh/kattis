#include <iostream>
using namespace std;

int n, b, h, w, p, a;

int main()
{
  cin >> n >> b >> h >> w;
  int res = b + 1;
  while (h--)
  {
    cin >> p;
    for (int i = 0; i < w; i++)
    {
      cin >> a;
      if (a >= n)
      {
        res = min(res, n * p);
      }
    }
  }
  if (res > b)
  {
    cout << "stay home" << endl;
  }
  else
  {
    cout << res << endl;
  }
}