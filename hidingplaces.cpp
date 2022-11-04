#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
string s;
vector<pair<int, int>> moves = {
    {1, 2}, {-1, 2}, {1, -2}, {-1, -2}, {2, 1}, {-2, 1}, {2, -1}, {-2, -1}};

int main()
{
  cin >> n;
  while (n > 0)
  {
    cin >> s;
    int b[8][8];
    bool v[8][8] = {false};
    int r = s[1] - '1', c = s[0] - 'a';
    queue<pair<int, int>> q;
    q.push({r, c});
    b[r][c] = 0;
    while (!q.empty())
    {
      int size = q.size();
      for (int i = 0; i < size; i++)
      {
        auto [r, c] = q.front();
        q.pop();
        if (v[r][c])
          continue;
        v[r][c] = true;
        for (auto &move : moves)
        {
          auto [mr, mc] = move;
          int nr = r + mr, nc = c + mc;
          if (nr >= 8 || nr < 0 || nc >= 8 || nc < 0 || v[nr][nc])
          {
            continue;
          }
          q.push({nr, nc});
          b[nr][nc] = b[r][c] + 1;
          m = max(m, b[nr][nc]);
        }
      }
    }
    cout << m << " ";
    for (int i = 7; i >= 0; i--)
    {
      for (int j = 0; j < 8; j++)
      {
        if (b[i][j] == m)
        {
          cout << char(j + 'a') << char(i + '1') << " ";
        }
      }
    }
    cout << endl;
    n--;
  }
}