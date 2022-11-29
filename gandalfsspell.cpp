#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

string word, sentence;
unordered_map<char, string> um;
unordered_map<string, char> um1;

vector<string> split(string s, string delim)
{
  vector<string> res;
  size_t pos = 0, next;
  while ((next = s.find(delim, pos)) != string::npos)
  {
    res.push_back(s.substr(pos, next - pos));
    pos = next + delim.length();
  }
  res.push_back(s.substr(pos));
  return res;
}

int main()
{
  cin >> word;
  getline(cin >> ws, sentence);
  vector<string> toks = split(sentence, " ");
  if (word.length() != toks.size())
  {
    cout << "False" << endl;
    return 0;
  }
  for (int i = 0; i < word.length(); i++)
  {
    if (um.find(word[i]) == um.end() &&
        um1.find(toks[i]) == um1.end())
    {
      um[word[i]] = toks[i];
      um1[toks[i]] = word[i];
    }
    else if (um[word[i]] == toks[i] && um1[toks[i]] == word[i])
    {
      continue;
    }
    else
    {
      cout << "False" << endl;
      return 0;
    }
  }
  cout << "True" << endl;
}