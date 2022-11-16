#include <iostream>
using namespace std;

int n;
string s;

int main()
{
  cin >> n;
  char a[n][n];
  for (int i = 0; i < n; i++)
  {
    cin >> s;
    for (int j = 0; j < n; j++)
    {
      a[i][j] = s[j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    int b = 0, w = 0, count = 0;
    char c = 'x';
    for (int j = 0; j < n; j++)
    {
      if (a[i][j] == 'W')
      {
        w++;
      }
      else
      {
        b++;
      }

      if (c == a[i][j])
      {
        count++;
        if (count >= 3)
        {
          cout << "0" << endl;
          return 0;
        }
      }
      else
      {
        c = a[i][j];
        count = 1;
      }
    }
    if (b != w)
    {
      cout << "0" << endl;
      return 0;
    }
  }
  for (int j = 0; j < n; j++)
  {
    int b = 0, w = 0, count = 0;
    char c = 'x';
    for (int i = 0; i < n; i++)
    {
      // cout << a[i][j];
      if (a[i][j] == 'W')
      {
        w++;
      }
      else
      {
        b++;
      }

      if (c == a[i][j])
      {
        count++;
        if (count >= 3)
        {
          cout << "0" << endl;
          return 0;
        }
      }
      else
      {
        c = a[i][j];
        count = 1;
      }
    }
    if (b != w)
    {
      cout << "0" << endl;
      return 0;
    }
  }
  cout << "1" << endl;
}