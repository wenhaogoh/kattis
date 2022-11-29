#include <iostream>
using namespace std;

int m, n, u, l, r, d;
string s;

int main()
{
  cin >> m >> n >> u >> l >> r >> d;
  int rows = m + u + d;
  int cols = n + l + r;
  char res[rows][cols];
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      res[i][j] = (i + j) % 2 ? '.' : '#';
    }
  }
  for (int i = 0; i < m; i++)
  {
    cin >> s;
    for (int j = 0; j < n; j++)
    {
      res[i + u][j + l] = s[j];
    }
  }
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cout << res[i][j];
    }
    cout << endl;
  }
}