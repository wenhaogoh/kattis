#include <iostream>
using namespace std;

int n, m;
string s;

// void backtrack(char **a, int r, int c)
// {
//   if (r >= n)
//   {
//     return;
//   }
//   if (c >= m)
//   {
//     return backtrack(a, r + 1, 0);
//   }
//   if (a[r][c] == '#')
//   {
//     return backtrack(a, r, c + 1);
//   }
//   if (a[r][c] == '.')
//   {
//     bool north = r - 1 >= 0 ? a[r - 1][c] != 'E' : true;
//     bool south = r + 1 < n ? a[r + 1][c] != 'E' : true;
//     bool east = c + 1 < m ? a[r][c + 1] != 'E' : true;
//     bool west = c - 1 >= 0 ? a[r][c - 1] != 'E' : true;
//     if (north && south && east && west)
//     {
//       a[r][c] = 'E';
//       return backtrack(a, r, c + 1);
//     }
//     else
//     {
//     }
//   }
// }

int main()
{
  cin >> n >> m;
  char **a = new char *[n]();
  for (int i = 0; i < n; i++)
  {
    cin >> s;
    a[i] = new char[m]();
    for (int j = 0; j < m; j++)
    {
      a[i][j] = s[j];
    }
  }
  // backtrack(a, 0, 0);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (a[i][j] == '.')
      {
        bool north = i - 1 >= 0 ? a[i - 1][j] != 'E' : true;
        bool south = i + 1 < n ? a[i + 1][j] != 'E' : true;
        bool east = j + 1 < m ? a[i][j + 1] != 'E' : true;
        bool west = j - 1 >= 0 ? a[i][j - 1] != 'E' : true;
        if (north && south && east && west)
        {
          a[i][j] = 'E';
        }
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << a[i][j];
    }
    cout << endl;
  }
}