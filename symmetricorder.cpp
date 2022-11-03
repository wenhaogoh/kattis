#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, tc;
string s;

int main()
{
  while (cin >> n && n != 0)
  {
    tc++;
    cout << "SET " << tc << endl;
    vector<string> v;
    bool print = true;
    while (n > 0)
    {
      cin >> s;
      if (print)
      {
        cout << s << endl;
      }
      else
      {
        v.push_back(s);
      }
      print = !print;
      n--;
    }
    reverse(v.begin(), v.end());
    for (auto &s : v)
    {
      cout << s << endl;
    }
  }
}