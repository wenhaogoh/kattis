#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
int n, a, res;

int main()
{
  cin >> n;
  while (n--)
  {
    cin >> a;
    v.push_back(a);
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++)
  {
    if (i == 0 || v[i] - v[i - 1] != 1)
    {
      res += v[i];
    }
  }
  cout << res << endl;
}