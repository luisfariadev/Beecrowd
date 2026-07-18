#include <stdio.h>

int main()
{
    int p, q;

    while (scanf("%d %d", &p, &q) != EOF)
    {
        long long soma1 = 1;
        long long soma2 = 1;
        long long soma = 0;

        for (int i = 1; i <= p; i++)
        {
            soma1 = soma1 * i;
        }

        for (int i = 1; i <= q; i++)
        {
            soma2 = soma2 * i;
        }

        soma = soma1 + soma2;

        printf("%lld\n", soma);
    }

    return 0;
}