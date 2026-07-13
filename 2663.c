#include <stdio.h>

int main()
{
    int cont = 0;
    int maior = 0;
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    int notas[n];
    int ord[n];
    int p = 0;
    int posicao;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &notas[i]);
    }

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (notas[i] > maior)
            {
                maior = notas[i];
                posicao = i;
            }

            if (i == n - 1)
            {
                ord[p] = maior;
                p++;
                notas[posicao] = 0;
                maior = 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i >= k)
        {
            if (ord[k - 1] == ord[i])
            {
                cont = cont + 1;
            }
        }
    }

    printf("%d\n", k + cont);

    return 0;
}