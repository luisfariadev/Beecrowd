#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, c, r1, r2;

    while (cin >> l >> c >> r1 >> r2 && (l != 0 || c != 0 || r1 != 0 || r2 != 0))
    {
        if (2 * r1 > l || 2 * r2 > l || 2 * r1 > c || 2 * r2 > c)
        {
            cout << "N" << endl;
            continue;
        }

        int dx = l - r1 - r2;
        int dy = c - r1 - r2;
        int soma_raios = r1 + r2;

        if (dx * dx + dy * dy >= soma_raios * soma_raios)
        {
            cout << "S" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }

    return 0;
}