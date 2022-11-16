#include <iostream>
#include <unordered_map>
using namespace std;

int m, n, p;
string s;
unordered_map<string, int> um;

int main()
{
  cin >> m >> n;
  while (m > 0)
  {
    cin >> s >> p;
    um[s] = p;
    m--;
  }
  while (n > 0)
  {
    int res = 0;
    while (cin >> s && s != ".")
    {
      res += um[s];
    }
    cout << res << endl;
    n--;
  }
}