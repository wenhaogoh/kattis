#include <iostream>
using namespace std;

int n;

int main()
{
  cin >> n;
  while (n--)
  {
    int a[10] = {0};
    string s;
    getline(cin >> ws, s);
    cout << s << endl;
    int m;
    cin >> m >> s;
    cout << m << " " << s << endl;
    while (m > 0)
    {
      cin >> s;
      if (s == "+")
      {
        int first, last, interval;
        cin >> first >> last >> interval;
        for (int i = first; i <= last; i += interval)
        {
          string ss = to_string(i);
          for (auto &c : ss)
          {
            a[c - '0']++;
          }
          m--;
        }
      }
      else
      {
        for (auto &c : s)
        {
          a[c - '0']++;
        }
        m--;
      }
    }
    int total = 0;
    for (int i = 0; i < 10; i++)
    {
      total += a[i];
      cout << "Make " << a[i] << " digit " << i << endl;
    }
    cout << "In total " << total << (total > 1 ? " digits" : " digit") << endl;
  }
}