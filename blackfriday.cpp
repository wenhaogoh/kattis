#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int n, a, res, idx = -1;
unordered_map<int, int> um;
vector<int> v;

int main()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    um[a]++;
    v.push_back(a);
  }
  for (int i = 0; i < n; i++)
  {
    if (um[v[i]] == 1 && v[i] > res)
    {
      res = v[i];
      idx = i + 1;
    }
  }
  if (idx == -1)
  {
    cout << "none" << endl;
  }
  else
  {
    cout << idx << endl;
  }
}