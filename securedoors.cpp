#include <iostream>
#include <unordered_map>
using namespace std;

int n;
string status, name;
unordered_map<string, string> um;

int main() {
  cin >> n;
  while (n > 0) {
    cin >> status >> name;
    auto iter = um.find(name);
    cout << name << " " << (status == "entry" ? "entered" : "exited");
    if (um.find(name) == um.end()) {
      if (status == "exit") {
        cout << " (ANOMALY)";
      }
    } else {
      if (status == iter->second) {
        cout << " (ANOMALY)";
      }
    }
    um[name] = status;
    cout << endl;
    n--;
  }
}