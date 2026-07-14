#include <stdio.h>

int main()
{
    int final;
    int cont;
    int n;
    unsigned long long numero;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%llu", &numero);
        cont = 0;
        final = 0;

        while (numero != 0)
        {
            if (numero % 2 == 1)
            {
                cont = cont + 1;

                if (cont > final)
                {
                    final = cont;
                }
            }
            else
            {
                cont = 0;
            }

            numero = numero / 2;
        }

        printf("%d\n", final);
    }

    return 0;
}