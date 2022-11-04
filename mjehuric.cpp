#include <iostream>
using namespace std;

int a[5];

bool isSorted(int arr[]);
void print(int arr[]);

int main()
{
  for (int i = 0; i < 5; i++)
  {
    cin >> a[i];
  }
  while (!isSorted(a))
  {
    for (int i = 0; i < 4; i++)
    {
      if (a[i] > a[i + 1])
      {
        swap(a[i], a[i + 1]);
        print(a);
      }
    }
  }
}

bool isSorted(int arr[])
{
  for (int i = 1; i < 5; i++)
  {
    if (arr[i] < arr[i - 1])
    {
      return false;
    }
  }
  return true;
}

void print(int arr[])
{
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}