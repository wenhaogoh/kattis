#include <iostream>
using namespace std;

int n, k, p, res = 1;

int main()
{
  cin >> n;
  while (n--)
  {
    cin >> k;
    if (k < p)
    {
      res++;
    }
    p = k;
  }
  cout << res << endl;
}