#include <iostream>
#include <unordered_set>
using namespace std;

int k, m, code, c, r;

int main()
{
  while (cin >> k && k != 0)
  {
    unordered_set<int> st;
    cin >> m;
    while (k--)
    {
      cin >> code;
      st.insert(code);
    }
    bool canGradudate = true;
    while (m--)
    {
      cin >> c >> r;
      while (c--)
      {
        cin >> code;
        if (st.find(code) != st.end())
        {
          r--;
        }
      }
      if (r > 0)
      {
        canGradudate = false;
      }
    }
    cout << (canGradudate ? "yes" : "no") << endl;
  }
}