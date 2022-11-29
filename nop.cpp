#include <iostream>
using namespace std;

string s;
int res, ptr;

int main()
{
  cin >> s;
  for (int i = 0; i < s.length(); i++)
  {
    char c = s[i];
    if (isupper(c))
    {
      if (ptr % 4)
      {
        res += 4 - ptr % 4;
        ptr += 4 - ptr % 4;
      }
    }
    ptr++;
  }
  cout << res << endl;
}