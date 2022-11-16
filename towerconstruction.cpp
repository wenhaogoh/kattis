#include <iostream>
using namespace std;

int n, x, p, res;

int main()
{
  cin >> n;
  while (n > 0)
  {
    cin >> x;
    if (x > p)
    {
      res++;
    }
    p = x;
    n--;
  }
  cout << res << endl;
}