#include <iostream>
#include <vector>
using namespace std;

int r, c;
string s;

vector<pair<int, int>> directions = {
    {1, 0},
    {1, 1},
    {0, 1},
    {1, -1},
    {-1, 1},
    {-1, 0},
    {-1, -1},
    {0, -1},
};

int main()
{
  cin >> r >> c;
  char a[r][c];
  for (int i = 0; i < r; i++)
  {
    cin >> s;
    for (int j = 0; j < c; j++)
    {
      a[i][j] = s[j];
    }
  }
  int x = -1, y = -1;
  int maxN = 0;
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      if (a[i][j] == '.')
      {
        int n = 0;
        for (auto &dir : directions)
        {
          int ii = i + dir.first, jj = j + dir.second;
          if (ii < 0 || ii >= r || jj < 0 || jj >= c)
          {
            continue;
          }
          if (a[ii][jj] == 'o')
          {
            n++;
          }
        }
        if (n > maxN)
        {
          maxN = n;
          x = i;
          y = j;
        }
      }
    }
  }
  if (x != -1)
  {
    a[x][y] = 'o';
  }
  int res = 0;
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      if (a[i][j] == 'o')
      {
        int handshakes = 0;
        for (int k = 0; k < 4; k++)
        {
          pair<int, int> dir = directions[k];
          int ii = i + dir.first, jj = j + dir.second;
          if (ii < 0 || ii >= r || jj < 0 || jj >= c)
          {
            continue;
          }
          if (a[ii][jj] == 'o')
          {
            handshakes++;
          }
        }
        res += handshakes;
      }
    }
  }
  cout << res << endl;
}