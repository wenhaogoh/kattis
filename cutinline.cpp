#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
string s, a, b, c;
vector<string> q;

int main()
{
  cin >> n;
  while (n > 0)
  {
    cin >> s;
    q.push_back(s);
    n--;
  }
  cin >> n;
  while (n > 0)
  {
    cin >> a >> b;
    if (a == "cut")
    {
      cin >> c;
      q.insert(find(q.begin(), q.end(), c), b);
    }
    else
    {
      q.erase(find(q.begin(), q.end(), b));
    }
    n--;
  }
  for (auto &qi : q)
  {
    cout << qi << endl;
  }
}