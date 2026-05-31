#include <stdio.h>

int main()
{

    int a, b, c, m, n;
    scanf("%d %d %d", &a, &b, &c);
    m = (a + b + abs(a - b)) / 2;
    n = (m + c + abs(m - c)) / 2;
    if (n > m)
    {
        printf("%d eh o maior\n", n);
    }
    else
    {
        printf("%d eh o maior\n", m);
    }

    return 0;
}