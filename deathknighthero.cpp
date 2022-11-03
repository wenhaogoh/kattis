#include <iostream>
using namespace std;

int n;
string s;

int main()
{
  cin >> n;
  int res = n;
  while (n > 0)
  {
    cin >> s;
    for (int i = 1; i < s.length(); i++)
    {
      if (s[i] == 'D' && s[i - 1] == 'C')
      {
        res--;
        break;
      }
    }
    n--;
  }
  cout << res << endl;
}