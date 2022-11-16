#include <iostream>
#include <set>
using namespace std;

int n;
string s;

int main()
{
  cin >> n;
  while (n > 0)
  {
    set<char> st;
    for (int i = 0; i < 26; i++)
    {
      st.insert('a' + i);
    }
    getline(cin >> ws, s);
    for (auto &c : s)
    {
      if (!isalpha(c))
      {
        continue;
      }
      st.erase(tolower(c));
    }
    if (st.empty())
    {
      cout << "pangram" << endl;
    }
    else
    {
      cout << "missing ";
      for (auto &c : st)
      {
        cout << c;
      }
      cout << endl;
    }
    n--;
  }
}