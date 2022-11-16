#include <iostream>
using namespace std;

int r, c, tc = 1;
string s;

enum direction
{
  north,
  south,
  east,
  west
};

void move(direction d, char **m, int r, int c, int x, int y);

int main()
{
  while (cin >> c >> r && (r != 0 || c != 0))
  {
    int sr, sc;
    char **m = new char *[r];
    for (int i = 0; i < r; i++)
    {
      m[i] = new char[c];
      cin >> s;
      for (int j = 0; j < c; j++)
      {
        m[i][j] = s[j];
        if (m[i][j] == '*')
        {
          sr = i;
          sc = j;
        }
      }
    }
    direction d = sr == 0       ? south
                  : sc == 0     ? east
                  : sr == r - 1 ? north
                                : west;
    move(d, m, r, c, sr, sc);
    cout << "HOUSE " << tc << endl;
    tc++;
    for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
      {
        cout << m[i][j];
      }
      cout << endl;
    }
  }
}

void move(direction d, char **m, int r, int c, int x, int y)
{
  if ((x == 0 || y == 0 || x == r - 1 || y == c - 1) && m[x][y] != '*')
  {
    m[x][y] = '&';
    return;
  }
  if (m[x][y] == '/')
  {
    switch (d)
    {
    case north:
      return move(east, m, r, c, x, y + 1);
    case south:
      return move(west, m, r, c, x, y - 1);
    case east:
      return move(north, m, r, c, x - 1, y);
    case west:
      return move(south, m, r, c, x + 1, y);
    }
  }
  if (m[x][y] == '\\')
  {
    switch (d)
    {
    case north:
      return move(west, m, r, c, x, y - 1);

    case south:
      return move(east, m, r, c, x, y + 1);

    case east:
      return move(south, m, r, c, x + 1, y);

    case west:
      return move(north, m, r, c, x - 1, y);
    }
  }
  switch (d)
  {
  case north:
    return move(north, m, r, c, x - 1, y);

  case south:
    return move(south, m, r, c, x + 1, y);

  case east:
    return move(east, m, r, c, x, y + 1);

  case west:
    return move(west, m, r, c, x, y - 1);
  }
}
