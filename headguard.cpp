#include <iostream>
using namespace std;

string s;

int main()
{
  while (cin >> s)
  {
    char prev = '#';
    int count = 0;
    for (auto &c : s)
    {
      if (prev != c)
      {
        if (count != 0)
        {
          cout << count << prev;
        }
        prev = c;
        count = 1;
      }
      else
      {
        count++;
      }
    }
    if (count != 0)
    {
      cout << count << prev;
    }
    cout << endl;
  }
}