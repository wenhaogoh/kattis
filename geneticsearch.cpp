#include <iostream>
#include <unordered_set>
using namespace std;

string s, l;

bool isOneLessChar(string l, string s)
{
  bool hasShifted = false;
  size_t lpos = 0, spos = 0;
  while (spos < s.length())
  {
    if (l[lpos] == s[spos])
    {
      lpos++;
      spos++;
    }
    else if (hasShifted)
    {
      return false;
    }
    else
    {
      hasShifted = true;
      lpos++;
    }
  }
  return true;
}

bool isOneMoreChar(string l, string s)
{
  bool hasShifted = false;
  size_t lpos = 0, spos = 0;
  while (spos < s.length())
  {
    if (l[lpos] == s[spos])
    {
      lpos++;
      spos++;
    }
    else if (hasShifted)
    {
      return false;
    }
    else
    {
      hasShifted = true;
      spos++;
    }
  }
  return true;
}

int main()
{
  while (cin >> s && s != "0")
  {
    cin >> l;
    int slen = s.length(), llen = l.length();
    int type1 = 0, type2 = 0, type3 = 0;

    for (int i = 0; i < llen - slen + 1; i++)
    {
      if (l.substr(i, slen) == s)
      {
        type1++;
      }
    }

    for (int i = 0; i < llen - slen + 2; i++)
    {
      if (isOneLessChar(s, l.substr(i, slen - 1)))
      {
        type2++;
      }
    }

    for (int i = 0; i < llen - slen; i++)
    {
      if (isOneMoreChar(s, l.substr(i, slen + 1)))
      {
        type3++;
      }
    }

    cout << type1 << " " << type2 << " " << type3 << endl;
  }
}