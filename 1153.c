#include <stdio.h>

int main()
{
    int n, p;
    scanf("%d", &n);
    p = 1;

    for (int i = 1; i <= n; i++)
    {
        p = p * i;
    }

    printf("%d\n", p);

    return 0;
}