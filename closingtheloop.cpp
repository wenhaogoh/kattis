#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, s;
string rope;

int main()
{
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    vector<int> red;
    vector<int> blue;
    cin >> s;
    while (s > 0)
    {
      cin >> rope;
      char c = rope[rope.length() - 1];
      int l = stoi(rope.substr(0, rope.length() - 1));
      if (c == 'R')
      {
        red.push_back(l);
      }
      else
      {
        blue.push_back(l);
      }
      s--;
    }
    sort(red.rbegin(), red.rend());
    sort(blue.rbegin(), blue.rend());
    int sc = min(red.size(), blue.size());
    int res = 0;
    for (int j = 0; j < sc; j++)
    {
      res += red[j];
      res += blue[j];
    }
    cout << "Case #" << i << ": " << res - 2 * sc << endl;
  }
}