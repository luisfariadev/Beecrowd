#include <stdio.h>

int main()
{

    int valor, soma, caso;
    caso = 1;

    while (scanf("%d", &valor) == 1)
    {
        soma = 1;

        for (int i = 0; i <= valor; i++)
        {
            soma = soma + i;
        }

        if (soma == 1)
        {
            printf("Caso %d: %d numero\n", caso, soma);
        }
        else
        {
            printf("Caso %d: %d numeros\n", caso, soma);
        }

        caso = caso + 1;

        for (int i = 0; i <= valor; i++)
        {
            if (i == 0 && i < valor)
            {
                printf("0 ");
            }
            else if (i == 0 && i == valor)
            {
                printf("0\n");
            }
            else
            {
                for (int p = 1; p <= i; p++)
                {
                    if (i == valor && p == i)
                    {
                        printf("%d\n", i);
                    }
                    else
                    {
                        printf("%d ", i);
                    }
                }
            }
        }

        printf("\n");
    }

    return 0;
}