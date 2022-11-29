#include <iostream>
using namespace std;

int k, res;

int gcd(int a, int b)
{
  if (b == 0)
  {
    return a;
  }
  return gcd(b, a % b);
}

int lcm(int a, int b)
{
  return a / gcd(a, b) * b;
}

int main()
{
  cin >> k;
  while (k--)
  {
    int year, a, b;
    cin >> year >> a >> b;
    int next = year + lcm(a, b);
    if (res == 0)
    {
      res = next;
    }
    else
    {
      res = min(res, next);
    }
  }
  cout << res << endl;
}