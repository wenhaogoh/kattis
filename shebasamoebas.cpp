#include <iostream>
using namespace std;

int m, n, res;
string s;

void bfs(char **, int, int, int, int);

int main()
{
  cin >> m >> n;
  char **a = new char *[m];
  for (int i = 0; i < m; i++)
  {
    cin >> s;
    a[i] = new char[n];
    for (int j = 0; j < n; j++)
    {
      a[i][j] = s[j];
    }
  }
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (a[i][j] == '#')
      {
        res++;
        bfs(a, m, n, i, j);
      }
    }
  }
  cout << res << endl;
}

void bfs(char **a, int m, int n, int i, int j)
{
  if (i < 0 || i >= m || j < 0 || j >= n)
  {
    return;
  }
  if (a[i][j] == '.')
  {
    return;
  }
  a[i][j] = '.';
  bfs(a, m, n, i - 1, j);
  bfs(a, m, n, i - 1, j + 1);
  bfs(a, m, n, i, j + 1);
  bfs(a, m, n, i + 1, j + 1);
  bfs(a, m, n, i + 1, j);
  bfs(a, m, n, i + 1, j - 1);
  bfs(a, m, n, i, j - 1);
  bfs(a, m, n, i - 1, j - 1);
}