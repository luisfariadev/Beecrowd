#include <stdio.h>

int main()
{
    int n, soma;
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        soma = n + 1;
        printf("%d\n", soma);

        for (int cont = 0; cont < 5; cont = cont + 1)
        {
            soma = soma + 2;
            printf("%d\n", soma);
        }
    }
    else
    {
        soma = n;
        printf("%d\n", soma);
        for (int cont = 0; cont < 5; cont = cont + 1)
        {
            soma = soma + 2;
            printf("%d\n", soma);
        }
    }

    return 0;
}
