#include <iostream>
using namespace std;

int n, g, k;

int main()
{
  cin >> n;
  while (n > 0)
  {
    cin >> g;
    int p;
    for (int i = 1; i <= g; i++)
    {
      cin >> k;
      if (i != 1 && k - p != 1)
      {
        cout << i << endl;
        continue;
      }
      p = k;
    }
    n--;
  }
}