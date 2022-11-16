#include <iostream>
#include <unordered_map>
using namespace std;

string s;

unordered_map<string, string> um = {
    {"A#", "Bb"}, {"C#", "Db"}, {"D#", "Eb"}, {"F#", "Gb"}, {"G#", "Ab"}, {"Bb", "A#"}, {"Db", "C#"}, {"Eb", "D#"}, {"Gb", "F#"}, {"Ab", "G#"}};

int main()
{
  int tc = 1;
  while (getline(cin, s))
  {
    int idx = s.find(" ");
    string note = s.substr(0, idx);
    string tonality = s.substr(idx + 1);
    auto iter = um.find(note);
    cout << "Case " << tc << ": ";
    if (iter == um.end())
    {
      cout << "UNIQUE" << endl;
    }
    else
    {
      cout << iter->second << " " << tonality << endl;
    }
    tc++;
  }
}