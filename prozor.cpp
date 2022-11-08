#include <iostream>
using namespace std;

int r, s, k, m, mr, ms;
string l;

int main()
{
  cin >> r >> s >> k;
  char arr[r][s];
  for (int i = 0; i < r; i++)
  {
    cin >> l;
    for (int j = 0; j < s; j++)
    {
      arr[i][j] = l[j];
    }
  }
  for (int i = 0; i <= r - k; i++)
  {
    for (int j = 0; j <= s - k; j++)
    {
      int count = 0;
      for (int x = 0; x < k - 2; x++)
      {
        for (int y = 0; y < k - 2; y++)
        {
          if (arr[i + x + 1][j + y + 1] == '*')
          {
            count++;
          }
        }
      }
      if (count > m)
      {
        mr = i;
        ms = j;
        m = count;
      }
    }
  }
  for (int i = 0; i < k; i++)
  {
    for (int j = 0; j < k; j++)
    {
      if ((i == 0 && j == 0) || (i == k - 1 && j == 0) || (i == 0 && j == k - 1) || (i == k - 1 && j == k - 1))
      {
        arr[i + mr][j + ms] = '+';
      }
      else if (i == 0 || i == k - 1)
      {
        arr[i + mr][j + ms] = '-';
      }
      else if (j == 0 || j == k - 1)
      {
        arr[i + mr][j + ms] = '|';
      }
    }
  }
  cout << m << endl;
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < s; j++)
    {
      cout << arr[i][j];
    }
    cout << endl;
  }
}