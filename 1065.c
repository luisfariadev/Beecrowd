#include <stdio.h>

int main()
{
    int n, soma;

    soma = 0;

    for (int cont = 1; cont <= 5; cont = cont + 1)
    {
        scanf("%d", &n);

        if (n % 2 == 0)
        {
            soma = soma + 1;
        }
    }

    printf("%d valores pares\n", soma);

    return 0;
}