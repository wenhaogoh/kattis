#include <iostream>
using namespace std;

int n;
string s;

int main()
{
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> s;
    if (s == "mumble")
      continue;
    if (stoi(s) != i)
    {
      cout << "something is fishy" << endl;
      return 0;
    }
  }
  cout << "makes sense" << endl;
}