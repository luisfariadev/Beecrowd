#include <stdio.h>

int main()
{

    int n, q, coelho, sapo, rato, total;
    char animal;
    scanf("%d", &n);
    coelho = 0;
    sapo = 0;
    rato = 0;

    for (int cont = 0; cont < n; cont = cont + 1)
    {
        scanf("%d %c", &q, &animal);

        if (animal == 'C')
        {
            coelho = coelho + q;
        }
        else if (animal == 'R')
        {
            rato = rato + q;
        }
        else
        {
            sapo = sapo + q;
        }
    }

    total = coelho + sapo + rato;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);
    printf("Percentual de coelhos: %.2f %%\n", (float)coelho * 100 / total);
    printf("Percentual de ratos: %.2f %%\n", (float)rato * 100 / total);
    printf("Percentual de sapos: %.2f %%\n", (float)sapo * 100 / total);

    return 0;
}