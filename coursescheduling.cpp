#include <iostream>
#include <map>
#include <set>
using namespace std;

int n;
string first, last, course;
map<string, set<string>> m;

int main()
{
  cin >> n;
  while (n > 0)
  {
    cin >> first >> last >> course;
    auto iter = m.find(course);
    if (iter == m.end())
    {
      m[course] = set<string>();
    }
    m[course].insert(first + last);
    n--;
  }
  for (auto &kv : m)
  {
    cout << kv.first << " " << kv.second.size() << endl;
  }
}