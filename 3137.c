#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int z;
    int p = n;
    int digito = 0;
    int casas;

    while (1)
    {
        casas = 0;

        while (n != 0)
        {
            n = n / 10;
            casas = casas + 1;
        }

        if (casas == 1)
        {
            digito = digito + p;
            break;
        }
        else
        {
            z = pow(10, casas - 1);
            digito = digito + (p - z + 1) * casas;
        }

        p = z - 1;
        n = p;
    }

    printf("%d\n", digito);

    return 0;
}