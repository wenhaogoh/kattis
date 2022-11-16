#include <iostream>
using namespace std;

int t, n;

int main()
{
  cin >> t;
  while (t > 0)
  {
    cin >> n;
    bool isReduced = false;
    int place = 1, res = 0;
    while (n > 0)
    {
      int d = n % 10;
      if (d != 0 && !isReduced)
      {
        d -= 1;
        isReduced = true;
      }
      res += d * place;
      place *= 10;
      n /= 10;
    }
    cout << res << endl;
    t--;
  }
}