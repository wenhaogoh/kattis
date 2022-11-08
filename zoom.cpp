#include <iostream>
using namespace std;

int n, k, x;

int main()
{
  cin >> n >> k;
  for (int i = 1; i <= n; i++)
  {
    cin >> x;
    if (i % k == 0)
    {
      cout << x << " ";
    }
  }
  cout << endl;
}