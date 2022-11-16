#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
int n, k, res;

int main()
{
  cin >> n;
  while (n > 0)
  {
    cin >> k;
    v.push_back(k);
    n--;
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++)
  {
    if (i > v.size() / 2)
    {
      res += v[i];
    }
    else
    {
      res += v[i] / 2;
    }
  }
  cout << res << endl;
}