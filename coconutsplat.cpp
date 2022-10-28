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
    arr.push_back({ i, folded });
  }
  while (arr.size() > 1) {
    // for (int i = 0; i < arr.size(); i++) {
    //   if (i == ptr) {
    //     cout << ">";
    //   }
    //   cout << "{" << arr[i].first << "," << arr[i].second << "}";
    // }
    // cout << "\n";
    ptr = (ptr + s - 1) % arr.size(); // player to splat
    switch (arr[ptr].second) {
      case folded:
        arr[ptr].second = fists;
        arr.insert(arr.begin() + ptr + 1, { arr[ptr].first, fists });
        break;
      case fists:
        arr[ptr].second = palms;
        ptr = (ptr + 1) % arr.size();
        break;
      case palms:
        arr.erase(arr.begin() + ptr);
        if (ptr == arr.size()) {
          ptr = 0;
        }
        break;
    }
  }
  cout << arr[0].first + 1 << "\n";
}