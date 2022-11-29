#include <iostream>
#include <vector>
using namespace std;

int n, m, a, b, k, g;
vector<int> georgePath;

int main()
{
  cin >> n >> m >> a >> b >> k >> g;
  int duration[n + 1][n + 1];
  while (g--)
  {
    int x;
    cin >> x;
    georgePath.push_back(x);
  }
  while (m--)
  {
    int r, c, t;
    cin >> r >> c >> t;
    duration[r][c] = t;
    duration[c][r] = t;
  }
}