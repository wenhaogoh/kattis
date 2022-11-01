#include <iostream>
#include <algorithm>
using namespace std;

int findGcd(int x, int y);
int n, f, v;

int main()
{
  cin >> n;
  cin >> f;
  for (int i = 1; i < n; i++)
  {
    cin >> v;
    int gcd = findGcd(f, v);
    cout << f / gcd << "/" << v / gcd << endl;
  }
}

int findGcd(int x, int y)
{
  int mn = min(x, y);
  for (int i = mn; i >= 1; i--)
  {
    if (x % i == 0 && y % i == 0)
    {
      return i;
    }
  }
  return 1;
}