#include <iostream>
using namespace std;

int l, r;

int main()
{
  cin >> l >> r;
  cout << (l * l <= 2 * r * r ? "fits" : "nope") << endl;
}