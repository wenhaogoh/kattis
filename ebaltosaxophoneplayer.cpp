#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int t;

unordered_map<char, vector<bool>> um = {
    {'c', {0, 1, 1, 1, 0, 0, 1, 1, 1, 1}},
    {'d', {0, 1, 1, 1, 0, 0, 1, 1, 1, 0}},
    {'e', {0, 1, 1, 1, 0, 0, 1, 1, 0, 0}},
    {'f', {0, 1, 1, 1, 0, 0, 1, 0, 0, 0}},
    {'g', {0, 1, 1, 1, 0, 0, 0, 0, 0, 0}},
    {'a', {0, 1, 1, 0, 0, 0, 0, 0, 0, 0}},
    {'b', {0, 1, 0, 0, 0, 0, 0, 0, 0, 0}},
    {'C', {0, 0, 1, 0, 0, 0, 0, 0, 0, 0}},
    {'D', {1, 1, 1, 1, 0, 0, 1, 1, 1, 0}},
    {'E', {1, 1, 1, 1, 0, 0, 1, 1, 0, 0}},
    {'F', {1, 1, 1, 1, 0, 0, 1, 0, 0, 0}},
    {'G', {1, 1, 1, 1, 0, 0, 0, 0, 0, 0}},
    {'A', {1, 1, 1, 0, 0, 0, 0, 0, 0, 0}},
    {'B', {1, 1, 0, 0, 0, 0, 0, 0, 0, 0}},
};

int main()
{
  cin >> t;
  cin.ignore();
  while (t--)
  {
    vector<int> counter;
    counter.resize(10, 0);
    vector<bool> v;
    v.resize(10, 0);
    string s;
    getline(cin, s);
    for (auto &c : s)
    {
      vector<bool> next = um[c];
      for (int i = 0; i < 10; i++)
      {
        if (v[i] == 0 && next[i] == 1)
        {
          counter[i]++;
        }
      }
      v = vector<bool>(next);
    }
    for (int i = 0; i < 10; i++)
    {
      cout << counter[i] << " ";
    }
    cout << endl;
  }
}