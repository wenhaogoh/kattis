#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, k;
vector<int> a, b, c;

int main()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> k;
    a.push_back(k);
  }
  for (int i = 0; i < n; i++)
  {
    cin >> k;
    b.push_back(k);
  }
  for (int i = 0; i < n; i++)
  {
    cin >> k;
    c.push_back(k);
  }
  for (int i = 0; i < n; i++)
  {
    vector<int> t = {a[i],
                     b[i],
                     c[i]};
    sort(t.begin(), t.end());
    cout << t[1] << " ";
  }
}