#include <iostream>
using namespace std;

int n, t, k, s;

int main()
{
  cin >> n >> t;
  for (int i = 0; i < n; i++)
  {
    cin >> k;
    s += k;
    if (s > t)
    {
      cout << i << endl;
      return 0;
    }
  }
  cout << n << endl;
}