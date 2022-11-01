#include <iostream>
#include <cmath>
using namespace std;

int tc;
double v, a, x, h1, h2, t, vx, y;

int main()
{
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        cin >> v >> a >> x >> h1 >> h2;
        // cos(theta) = adj/hyp
        vx = v * cos(a * 3.14159 / 180);
        t = x / vx;
        // cout << "t: " << t << "\n";
        y = v * t * sin(a * 3.14159 / 180) - 0.5 * 9.81 * t * t;
        cout << (y > h1 + 1 && y < h2 - 1 ? "Safe" : "Not Safe") << "\n";
    }
}