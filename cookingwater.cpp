#include <iostream>
using namespace std;

int n, a, b, x = 0, y = 1000;

int main()
{
  cin >> n;
  while (n > 0)
  {
    cin >> a >> b;
    if (a > y || b < x)
    {
      cout << "edward is right" << endl;
      return 0;
    }
    else
    {
      x = max(x, a);
      y = min(y, b);
    }
    n--;
  }
  cout << "gunilla has a point" << endl;
}