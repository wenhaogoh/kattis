#include <iostream>
#include <set>
using namespace std;

int n, g, v;
set<int> s;

int main()
{
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    s.clear();
    cin >> g;
    for (int j = 0; j < g; j++)
    {
      cin >> v;
      if (s.find(v) == s.end())
      {
        s.insert(v);
      }
      else
      {
        s.erase(v);
      }
    }
    cout << "Case #" << i << ": " << *s.begin() << endl;
  }
}