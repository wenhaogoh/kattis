#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

string s;
vector<string> cards;
vector<vector<int>> res;

void backtrack(int ptr, vector<int> selection)
{
  if (selection.size() == 3)
  {
    res.push_back(selection);
    return;
  }
  if (ptr >= cards.size())
  {
    return;
  }
  bool canAdd = true;
  string selected = cards[ptr];
  for (int i = 0; i < selected.size(); i++)
  {
    unordered_set<char> st = {selected[i]};
    for (auto &idx : selection)
    {
      st.insert(cards[idx][i]);
    }
    if (st.size() != 1 && st.size() != selection.size() + 1)
    {
      canAdd = false;
      break;
    }
  }
  if (canAdd)
  {
    vector<int> newSelection = vector<int>(selection);
    newSelection.push_back(ptr);
    backtrack(ptr + 1, newSelection);
  }
  backtrack(ptr + 1, selection);
}

int main()
{
  for (int i = 0; i < 12; i++)
  {
    cin >> s;
    cards.push_back(s);
  }
  backtrack(0, {});
  if (res.empty())
  {
    cout << "no sets" << endl;
    return 0;
  }
  for (auto &selection : res)
  {
    for (auto &idx : selection)
    {
      cout << idx + 1 << " ";
    }
    cout << endl;
  }
}