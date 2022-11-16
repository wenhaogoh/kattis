#include <iostream>
using namespace std;

int n, x, res;

int main()
{
  cin >> n;
  int a[n][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> x;
      a[i][j] = x;
    }
  }
  for (int i = 0; i < n - 2; i++)
  {
    for (int j = i + 1; j < n - 1; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        if (a[i][j] + a[i][k] + a[j][k] == 3)
        {
          res++;
        }
      }
    }
  }
  cout << res << endl;
}