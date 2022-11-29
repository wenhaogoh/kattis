#include <iostream>
#include <unordered_map>
#include <cmath>
using namespace std;

unordered_map<char, char> um = {
    {'B', '8'},
    {'G', 'C'},
    {'I', '1'},
    {'O', '0'},
    {'Q', '0'},
    {'S', '5'},
    {'U', 'V'},
    {'Y', 'V'},
    {'Z', '2'},
};
int n, k;
string s, digits = "0123456789ACDEFHJKLMNPRTVWX";

int main()
{
  cin >> n;
  while (n--)
  {
    cin >> k >> s;
    cout << k << " ";
    for (int i = 0; i < s.length(); i++)
    {
      if (um.find(s[i]) != um.end())
      {
        s[i] = um[s[i]];
      }
    }
    int check = (2 * (s[0] - '0') +
                 4 * (s[1] - '0') +
                 5 * (s[2] - '0') +
                 7 * (s[3] - '0') +
                 8 * (s[4] - '0') +
                 10 * (s[5] - '0') +
                 11 * (s[6] - '0') +
                 13 * (s[7] - '0')) %
                27;
    if (digits[check] != s[s.length() - 1])
    {
      cout << "Invalid" << endl;
    }
    else
    {
      long res = 0;
      for (int i = 0; i < 8; i++)
      {
        char c = s[i];
        cout << c << endl;
        res += digits.find(c) * pow(27, 7 - i);
      }
      cout << res << endl;
    }
  }
}
