#include <stdio.h>

int main()
{

    int m, n, soma, menor, iteracoes;

    while (1)
    {
        scanf("%d %d", &m, &n);
        soma = 0;

        if (m > n)
        {
            iteracoes = m - n;
            menor = n;
        }
        else
        {
            iteracoes = n - m;
            menor = m;
        }

        if (n > 0 && m > 0)
        {
            for (int cont = 0; cont <= iteracoes; cont = cont + 1)
            {
                printf("%d ", menor);
                soma = soma + menor;
                menor = menor + 1;
            }
            printf("Sum=%d\n", soma);
        }
        else
        {
            break;
        }
    }

    return 0;
}