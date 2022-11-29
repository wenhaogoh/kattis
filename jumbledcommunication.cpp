#include <iostream>
#include <bitset>
using namespace std;

int n, b;

int main()
{
  cin >> n;
  while (n--)
  {
    cin >> b;
    int reversed = 0;
    int bitCount = 0;
    for (int i = 0; i < 8; i++)
    {
      bitCount++;
      int c = (reversed ^ b) & 1;
      reversed <<= 1;
      reversed |= c;
      b >>= 1;
    }
    int res = 0;
    while (bitCount--)
    {
      res <<= 1;
      res |= reversed & 1;
      reversed >>= 1;
    }
    cout << res << " ";
  }
  cout << endl;
}