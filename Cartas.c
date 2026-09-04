#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int t;
    int a;
    int b;

    while (scanf("%d %d", &n, &t) == 2 && (n != 0 && t != 0))
    {
        int acumulado = 0;
        int *controle = (int *)calloc(n + 2, sizeof(int));
        int *acima = (int *)malloc((n + 1) * sizeof(int));
        int *abaixo = (int *)malloc((n + 1) * sizeof(int));

        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &acima[i]);
        }

        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &abaixo[i]);
        }

        for (int i = 0; i < t; i++)
        {
            scanf("%d %d", &a, &b);
            controle[a] = controle[a] + 1;
            controle[b + 1] = controle[b + 1] - 1;
        }

        for (int i = 1; i <= n; i++)
        {
            acumulado = acumulado + controle[i];

            if (acumulado % 2 == 0)
            {
                printf("%d ", acima[i]);
            }
            else
            {
                printf("%d ", abaixo[i]);
            }
        }

        printf("\n");

        free(controle);
        free(acima);
        free(abaixo);
    }

    return 0;
}