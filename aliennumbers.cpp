#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int t;

int getValue(char c, string s);

int main()
{
  cin >> t;
  for (int j = 1; j <= t; j++)
  {
    cout << "Case #" << j << ": ";
    string number, source, target;
    cin >> number >> source >> target;
    int sourceBase = source.length();
    int targetBase = target.length();
    int value = 0;
    for (int i = 0; i < number.length(); i++)
    {
      value += getValue(number[i], source) * pow(sourceBase, number.length() - 1 - i);
    }
    string res = "";
    while (value > 0)
    {
      res += target[value % targetBase];
      value /= targetBase;
    }
    reverse(res.begin(), res.end());
    cout << res << endl;
  }
}

int getValue(char c, string s)
{
  for (int i = 0; i < s.length(); i++)
  {
    if (c == s[i])
    {
      return i;
    }
  }
  return -1;
}