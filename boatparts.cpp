#include <iostream>
#include <set>
using namespace std;

int p, n;
string s;
set<string> ss;

int main()
{
  cin >> p >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> s;
    ss.insert(s);
    if (ss.size() == p)
    {
      cout << i << "\n";
      return 0;
    }
  }
  cout << "paradox avoided"
       << "\n";
}