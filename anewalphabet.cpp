#include <iostream>
#include <cctype>
using namespace std;

string s;
string a[26] = {
    "@",
    "8",
    "(",
    "|)",
    "3",
    "#",
    "6",
    "[-]",
    "|",
    "_|",
    "|<",
    "1",
    "[]\\/[]",
    "[]\\[]",
    "0",
    "|D",
    "(,)",
    "|Z",
    "$",
    "']['",
    "|_|",
    "\\/",
    "\\/\\/",
    "}{",
    "`/",
    "2"};

int main()
{
  getline(cin, s);
  for (auto &c : s)
  {
    char lc = tolower(c);
    if (lc - 'a' >= 0 && lc - 'a' < 26)
    {
      cout << a[lc - 'a'];
    }
    else
    {
      cout << c;
    }
  }
}