#include <iostream>
#include <stack>
using namespace std;

int n;
char c;
stack<bool> st;

int main()
{
  cin >> n;
  bool a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> c;
    a[i] = c == 'T';
  }
  while (cin >> c)
  {
    if (c == '*')
    {
      bool second = st.top();
      st.pop();
      bool first = st.top();
      st.pop();
      bool res = first && second;
      st.push(res);
    }
    else if (c == '+')
    {
      bool second = st.top();
      st.pop();
      bool first = st.top();
      st.pop();
      bool res = first || second;
      st.push(res);
    }
    else if (c == '-')
    {
      bool first = st.top();
      st.pop();
      bool res = !first;
      st.push(res);
    }
    else
    {
      st.push(a[c - 'A']);
    }
  }
  cout << (st.top() ? 'T' : 'F') << endl;
}