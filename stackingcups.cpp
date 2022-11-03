#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
string name, radius;
vector<pair<int, string>> v;

int main()
{
  cin >> n;
  while (n > 0)
  {
    cin >> name >> radius;
    if (isdigit(name[0]))
    {
      swap(name, radius);
      v.push_back({stoi(radius) / 2, name});
    }
    else
    {
      v.push_back({stoi(radius), name});
    }
    n--;
  }
  sort(v.begin(), v.end());
  for (auto &p : v)
  {
    cout << p.second << endl;
  }
}