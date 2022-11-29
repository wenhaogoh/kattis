#include <iostream>
#include <cstring>
using namespace std;

int t, n, m;
string s;

int main()
{
  cin >> t;
  while (t--)
  {
    cin >> n >> m;
    double a[m];
    for (int i = 0; i < m; i++)
    {
      a[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
      cin >> s;
      for (int j = 0; j < m; j++)
      {
        int d = s[j] - '0';
        a[j] += d;
      }
    }
    for (int i = 0; i < m; i++)
    {
      double avg = a[i] / n;
      if (avg < 0.5)
      {
        cout << 0;
      }
      else
      {
        cout << 1;
      }
    }
    cout << endl;
  }
}