#include <stdio.h>

int main()
{

    int n, entrada, soma;
    scanf("%d", &n);
    soma = 0;

    for (int cont = 0; cont < n; cont = cont + 1)
    {
        scanf("%d", &entrada);

        for (int i = 1; i <= entrada; i = i + 1)
        {
            if (entrada % i == 0)
            {
                soma = soma + i;
            }
        }

        if (soma / 2 == entrada)
        {
            printf("%d eh perfeito\n", entrada);
        }
        else
        {
            printf("%d nao eh perfeito\n", entrada);
        }

        soma = 0;
    }

    return 0;
}