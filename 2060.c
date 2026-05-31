#include <stdio.h>

int main()
{

    int n, numero;
    int soma2, soma3, soma4, soma5;
    scanf("%d", &n);
    soma2 = 0;
    soma3 = 0;
    soma4 = 0;
    soma5 = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            soma2 = soma2 + 1;
        }
        if (numero % 4 == 0)
        {
            soma4 = soma4 + 1;
        }
        if (numero % 3 == 0)
        {
            soma3 = soma3 + 1;
        }
        if (numero % 5 == 0)
        {
            soma5 = soma5 + 1;
        }
    }

    printf("%d Multiplo(s) de 2\n", soma2);
    printf("%d Multiplo(s) de 3\n", soma3);
    printf("%d Multiplo(s) de 4\n", soma4);
    printf("%d Multiplo(s) de 5\n", soma5);

    return 0;
}