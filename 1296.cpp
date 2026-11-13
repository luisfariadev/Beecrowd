#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;

    while (cin >> a >> b >> c)
    {
        if (a <= 0 || b <= 0 || c <= 0)
        {
            printf("-1.000\n");
            continue;
        }
        else if (a + b <= c || a + c <= b || c + b <= a)
        {
            printf("-1.000\n");
            continue;
        }

        double s = ((a + b + c) * 1.0) / 2;
        s = s * (s - a) * (s - b) * (s - c);
        s = sqrt(s);
        s = (4 * s) / 3;
        printf("%.3lf\n", s);
    }

    return 0;
}