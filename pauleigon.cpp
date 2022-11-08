#include <iostream>
#include <cmath>
using namespace std;

double n, p, q;

int main()
{
  cin >> n >> p >> q;
  cout << (int(ceil((p + q)) / n) % 2 != 0 ? "opponent" : "paul") << endl;
}