#include <iostream>
#include <vector>
#include <set>
using namespace std;

int b, d, c, l;
set<vector<int>> res;
vector<int> options;

void permute(vector<int> selection, int total, int ptr)
{
  if (total > l)
  {
    return;
  }
  if (total == l)
  {
    res.insert(selection);
    return;
  }
  if (ptr < 0)
  {
    return;
  }

  int option = options[ptr];
  int newTotal = total + option;

  vector<int> newSelection(selection);
  newSelection[ptr]++;

  // use last option and can reuse
  permute(newSelection, newTotal, ptr);
  // dont use last option
  permute(selection, total, ptr - 1);
}

int main()
{
  cin >> b >> d >> c >> l;
  options = {b, d, c};
  permute({0, 0, 0}, 0, options.size() - 1);
  if (res.empty())
  {
    cout << "impossible" << endl;
    return 0;
  }
  for (auto &v : res)
  {
    for (auto &vi : v)
    {
      cout << vi << " ";
    }
    cout << endl;
  }
}