#include <iostream>
#include <set>
using namespace std;

set<int> st;
int n, l, r;

int main() {
  cin >> n;
  while (n > 0) {
    cin >> l >> r;
    for (int i = l; i <= r; i++) {
      st.insert(i);
    }
    n--;
  }
  cout << st.size() << endl;
}