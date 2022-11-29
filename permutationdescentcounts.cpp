#include <iostream>
#include <vector>
using namespace std;

int p, k, n, v;
vector<vector<int>> memo = vector<vector<int>>(101, vector<int>(101, 0));

int dp(int n, int v)
{
  if (v == 0 || n - v == 1)
  {
    return 1;
  }
  if (memo[n][v] > 0)
  {
    return memo[n][v];
  }
  int res = 0;
  res += (n - v) * dp(n - 1, v - 1);
  res %= 1001113;
  res += (v + 1) * dp(n - 1, v);
  res %= 1001113;
  return memo[n][v] = res;
}

int main()
{
  cin >> p;
  while (p--)
  {
    cin >> k >> n >> v;
    cout << k << " " << dp(n, v) << endl;
  }
}