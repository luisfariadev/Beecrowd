#include <stdio.h>

int main()
{
    long long a, b;

    while (scanf("%lld %lld", &a, &b) == 2 && (a != 0 || b != 0))
    {
        int cont = 0;
        long long maior;
        int vaium = 0;

        if (a >= b)
        {
            maior = a;
        }
        else
        {
            maior = b;
        }

        while (maior != 0)
        {
            if (a % 10 + b % 10 >= 10)
            {
                cont++;
                vaium = 1;
            }
            else if (a % 10 + b % 10 + vaium >= 10)
            {
                cont++;
                vaium = 1;
            }
            else
            {
                vaium = 0;
            }

            a = a / 10;
            b = b / 10;
            maior = maior / 10;
        }

        if (cont == 1)
        {
            printf("1 carry operation.\n");
        }
        else if (cont > 0)
        {
            printf("%d carry operations.\n", cont);
        }
        else
        {
            printf("No carry operation.\n");
        }
    }

    return 0;
}