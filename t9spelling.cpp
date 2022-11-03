#include <iostream>
#include <unordered_map>
using namespace std;

int n;
string s;
unordered_map<char, string> um = {
    {'a', "2"},
    {'b', "22"},
    {'c', "222"},
    {'d', "3"},
    {'e', "33"},
    {'f', "333"},
    {'g', "4"},
    {'h', "44"},
    {'i', "444"},
    {'j', "5"},
    {'k', "55"},
    {'l', "555"},
    {'m', "6"},
    {'n', "66"},
    {'o', "666"},
    {'p', "7"},
    {'q', "77"},
    {'r', "777"},
    {'s', "7777"},
    {'t', "8"},
    {'u', "88"},
    {'v', "888"},
    {'w', "9"},
    {'x', "99"},
    {'y', "999"},
    {'z', "9999"},
    {' ', "0"}};

int main()
{
  cin >> n;
  getline(cin, s);
  for (int i = 1; i <= n; i++)
  {
    cout << "Case #" << i << ": ";
    getline(cin, s);
    for (int j = 0; j < s.length(); j++)
    {
      if (j != 0 && um[s[j - 1]][0] == um[s[j]][0])
      {
        cout << " ";
      }
      cout << um[s[j]];
    }
    cout << endl;
  }
}