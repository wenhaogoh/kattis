#include <iostream>
#include <set>
using namespace std;

set<string> st;
string s;

int main() {
  while (cin >> s) {
    auto iter = st.find(s);
    if (iter != st.end()) {
      cout << "no" << endl;
      return 0;
    }
    st.insert(s);
  }
  cout << "yes" << endl;
}