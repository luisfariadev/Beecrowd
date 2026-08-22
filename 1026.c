#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int m, n;
    char numero1[35];
    char numero2[35];
    char soma[35];

    while (scanf("%u %u", &m, &n) != EOF)
    {
        int p = 31;
        unsigned int valor = 0;

        for (int i = 0; i < 32; i++)
        {
            numero1[i] = 0;
            numero2[i] = 0;
        }

        while (m != 0)
        {
            numero1[p] = m % 2;
            m = m / 2;
            p--;
        }

        p = 31;

        while (n != 0)
        {
            numero2[p] = n % 2;
            n = n / 2;
            p--;
        }

        for (int i = 0; i < 32; i++)
        {
            if (numero1[i] == numero2[i])
            {
                soma[i] = 0;
            }
            else
            {
                soma[i] = 1;
            }
        }

        p = 0;

        for (int i = 31; i >= 0; i--)
        {
            if (soma[i] == 1)
            {
                valor = valor + pow(2, p);
            }

            p++;
        }

        printf("%u\n", valor);
    }

    return 0;
}