#include <stdio.h>

int main()
{

    int n, v, x;
    scanf("%d", &n);
    v = 1;

    while (v <= 10)
    {
        x = v * n;
        printf("%d x %d = %d\n", v, n, x);
        v = v + 1;
    }

    return 0;
}