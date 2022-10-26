#include <iostream>
#include <vector>
using namespace std;

enum State {
  folded,
  fists,
  palms
};

int s, n, ptr = 0;

int main() {
  cin >> s >> n;
  vector<pair<int, State>> arr;
  for (int i = 0; i < n; i++) {
    arr[i] = { i, folded };
  }
  while (n > 1) {
    ptr = (ptr + s - 1) % arr.size(); // player to splat
    switch (arr[ptr].second) {
      case folded:
        arr[ptr].second = fists;
        arr.insert(arr.begin() + ptr + 1, { arr[ptr].first, fists });
        break;
      case fists:
        arr[ptr].second = palms;
        break;
      case palms:
        break;
    }
  }
}