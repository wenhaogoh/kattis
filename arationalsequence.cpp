#include <iostream>
#include <vector>
using namespace std;

int tc, a, b, p, q;

int main()
{
	cin >> tc;
	for (int i = 0; i < tc; i++)
	{
		cin >> a >> b;
		vector<string> seq;
		while (b != 1)
		{
			if (b % 2 == 0)
			{
				seq.push_back("l");
			}
			else
			{
				seq.push_back("r");
				b -= 1;
			}
			b /= 2;
		}
		p = 1;
		q = 1;
		for (int i = seq.size() - 1; i >= 0; i--)
		{
			if (seq[i] == "l")
			{
				q = p + q;
			}
			else
			{
				p = p + q;
			}
		}
		cout << a << " " << p << "/" << q << "\n";
	}
}