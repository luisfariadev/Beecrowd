#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    cin >> x4 >> y4;

    int terreno_A = fabs((x1 * y2 + x2 * y3 + x3 * y4 + x4 * y1) - (y1 * x2 + y2 * x3 + y3 * x4 + y4 * x1));
    terreno_A = terreno_A / 2;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    cin >> x4 >> y4;

    int terreno_B = fabs((x1 * y2 + x2 * y3 + x3 * y4 + x4 * y1) - (y1 * x2 + y2 * x3 + y3 * x4 + y4 * x1));
    terreno_B = terreno_B / 2;

    if (terreno_B >= terreno_A)
    {
        cout << "terreno B" << endl;
    }
    else
    {
        cout << "terreno A" << endl;
    }

    return 0;
}