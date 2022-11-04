#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int a[12] = {0};
int b[12] = {0};
int scale[12] = {1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1};
string s;
unordered_map<string, int> um = {
    {"A", 0},
    {"A#", 1},
    {"B", 2},
    {"C", 3},
    {"C#", 4},
    {"D", 5},
    {"D#", 6},
    {"E", 7},
    {"F", 8},
    {"F#", 9},
    {"G", 10},
    {"G#", 11},
};
vector<string> res;

void updateMajorScale(int n)
{
  for (int i = 0; i < 12; i++)
  {
    b[(i + n) % 12] = scale[i];
  }
}

int main()
{
  cin >> n;
  while (n > 0)
  {
    cin >> s;
    a[um[s]] = 1;
    n--;
  }
  for (auto &major : um)
  {
    updateMajorScale(major.second);
    bool canFit = true;
    for (int i = 0; i < 12; i++)
    {
      if (b[i] == 0 && a[i] == 1)
      {
        canFit = false;
        break;
      }
    }
    if (canFit)
    {
      res.push_back(major.first);
    }
  }
  sort(res.begin(), res.end());
  if (res.empty())
  {
    cout << "none" << endl;
  }
  else
  {
    for (auto &r : res)
    {
      cout << r << " ";
    }
  }
  cout << endl;
}