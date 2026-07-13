#include <stdio.h>

int main()
{
    int n;
    int p;

    while (scanf("%d", &n) != EOF)
    {
        p = 0;

        while (n > 1)
        {
            n = n / 2;
            p++;
        }

        printf("%d\n", p);
    }

    return 0;
}