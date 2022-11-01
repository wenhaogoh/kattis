#include <iostream>
using namespace std;

int n;
string a, b;

int main()
{
  cin >> n >> a >> b;
  if (n % 2 == 0)
  {
    // xnor
    cout << (a == b ? "Deletion succeeded" : "Deletion failed") << "\n";
  }
  else
  {
    // xor
    int r = 1;
    for (int i = 0; i < a.length(); i++)
    {
      r &= a[i] ^ b[i];
    }
    cout << (r ? "Deletion succeeded" : "Deletion failed") << "\n";
  }
}