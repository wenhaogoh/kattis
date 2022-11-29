#include <iostream>
#include <algorithm>
using namespace std;

string s;
int k;

int main()
{
  cin >> s >> k;
  int carry = 0;
  string res;
  for (int i = s.length() - 1; i >= 0; i--)
  {
    if (k > 1)
    {
      res.append("0");
      k--;
    }
    else if (k == 1)
    {
      int d = s[i] - '0';
      if (d >= 5)
      {
        carry = 1;
      }
      res.append("0");
      k--;
    }
    else
    {
      int d = s[i] - '0';
      d += carry;
      if (d == 10)
      {
        carry = 1;
        res.append("0");
      }
      else
      {
        carry = 0;
        res.append(to_string(d));
      }
    }
  }
  if (carry)
  {
    res.append(to_string(carry));
  }
  reverse(res.begin(), res.end());
  cout << stoi(res) << endl;
}