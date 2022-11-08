#include <iostream>
#include <set>
using namespace std;

int l, h, res;

int main()
{
  cin >> l >> h;
  for (int i = l; i <= h; i++)
  {
    bool isPossible = true;
    set<int> st;
    int copy = i;

    while (copy != 0)
    {
      int d = copy % 10;
      st.insert(d);
      copy /= 10;
    }

    if (st.size() != 6)
    {
      isPossible = false;
    }

    if (isPossible)
    {
      for (auto &d : st)
      {
        if (d == 0 || i % d != 0)
        {
          isPossible = false;
          break;
        }
      }
    }

    if (isPossible)
      res++;
  }
  cout << res << endl;
}