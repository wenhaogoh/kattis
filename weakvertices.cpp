#include <iostream>
using namespace std;

int n;

int main()
{
  while (cin >> n && n != -1)
  {
    int am[n][n];
    bool isFirst = true;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cin >> am[i][j];
      }
    }
    for (int i = 0; i < n; i++)
    {
      bool isWeak = true;
      for (int j = 0; j < n; j++)
      {
        if (i == j)
          continue;
        if (!am[i][j])
        {
          continue;
        }
        for (int k = 0; k < n; k++)
        {
          if (am[i][k] & am[j][k])
          {
            isWeak = false;
            break;
          }
        }
      }
      if (!isWeak)
        continue;
      cout << i << " ";
    }
    cout << "\n";
  }
}