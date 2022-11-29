#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

string s;
vector<int> v;

int main()
{
  cin >> s;
  while (s.length() % 3 != 0)
  {
    s = "0" + s;
  }
  for (int i = s.length() - 3; i >= 0; i -= 3)
  {
    int res = 0;
    for (int j = 0; j < 3; j++)
    {
      int d = s[i + 2 - j] - '0';
      if (d)
        res += pow(2, j);
    }
    v.push_back(res);
  }
  reverse(v.begin(), v.end());
  for (auto &vi : v)
  {
    cout << vi;
  }
  cout << endl;
}