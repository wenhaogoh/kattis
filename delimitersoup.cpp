#include <iostream>
#include <stack>
using namespace std;

int n;
string s;
stack<char> st;

int main()
{
  cin >> n;
  getline(cin >> ws, s);
  for (int i = 0; i < n; i++)
  {
    char c = s[i];
    if (c == '(' || c == '[' || c == '{')
    {
      st.push(c);
    }
    if (c == ')')
    {
      if (st.empty() || st.top() != '(')
      {
        cout << c << " " << i << endl;
        return 0;
      }
      st.pop();
    }
    if (c == ']')
    {
      if (st.empty() || st.top() != '[')
      {
        cout << c << " " << i << endl;
        return 0;
      }
      st.pop();
    }
    if (c == '}')
    {
      if (st.empty() || st.top() != '{')
      {
        cout << c << " " << i << endl;
        return 0;
      }
      st.pop();
    }
  }
  cout << "ok so far" << endl;
}