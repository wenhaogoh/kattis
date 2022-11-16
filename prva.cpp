#include <iostream>
using namespace std;

int r, c;
string s, res = "";

int main()
{
  cin >> r >> c;
  char m[r][c];
  for (int i = 0; i < r; i++)
  {
    getline(cin >> ws, s);
    for (int j = 0; j < c; j++)
    {
      m[i][j] = s[j];
    }
  }
  for (int i = 0; i < r; i++)
  {
    s = "";
    for (int j = 0; j < c; j++)
    {
      if (m[i][j] == '#')
      {
        if (s.length() >= 2)
        {
          if (res.length() == 0)
          {
            res = s;
          }
          else
          {
            res = min(res, s);
          }
        }
        s = "";
      }
      else
      {
        s += m[i][j];
      }
    }
    if (s.length() >= 2)
    {
      if (res.length() == 0)
      {
        res = s;
      }
      else
      {
        res = min(res, s);
      }
    }
  }

  for (int j = 0; j < c; j++)
  {
    s = "";
    for (int i = 0; i < r; i++)
    {
      if (m[i][j] == '#')
      {
        if (s.length() >= 2)
        {
          if (res.length() == 0)
          {
            res = s;
          }
          else
          {
            res = min(res, s);
          }
        }
        s = "";
      }
      else
      {
        s += m[i][j];
      }
    }
    if (s.length() >= 2)
    {
      if (res.length() == 0)
      {
        res = s;
      }
      else
      {
        res = min(res, s);
      }
    }
  }

  cout << res << endl;
}