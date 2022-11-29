#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, a;

int main()
{
  cin >> n;
  while (n--)
  {
    cin >> m;
    vector<int> v;
    while (m--)
    {
      cin >> a;
      v.push_back(a);
    }
    bool isPermutated = false;
    int diff = v[1] - v[0];
    for (int i = 2; i < v.size(); i++)
    {
      if (v[i] - v[i - 1] != diff)
      {
        isPermutated = true;
        break;
      }
    }
    if (!isPermutated)
    {
      cout << "arithmetic" << endl;
      continue;
    }
    sort(v.begin(), v.end());
    diff = v[1] - v[0];
    isPermutated = true;
    for (int i = 2; i < v.size(); i++)
    {
      if (v[i] - v[i - 1] != diff)
      {
        isPermutated = false;
        break;
      }
    }
    if (isPermutated)
    {
      cout << "permuted arithmetic" << endl;
    }
    else
    {
      cout << "non-arithmetic" << endl;
    }
  }
}