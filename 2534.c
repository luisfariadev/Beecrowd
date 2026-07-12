#include <stdio.h>

int main()
{
    int p;
    int maior, menor;
    int n, g;

    while (scanf("%d %d", &n, &g) != EOF)
    {
        int posicao;
        p = 0;
        int nota[n];
        int ord[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &nota[i]);
        }

        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if (i == 0)
                {
                    maior = nota[i];
                    posicao = i;
                }

                if (nota[i] > maior)
                {
                    maior = nota[i];
                    posicao = i;
                }

                if (i == n - 1)
                {
                    ord[p] = maior;
                    p++;
                    nota[posicao] = -1;
                }
            }
        }

        for (int i = 0; i < g; i++)
        {
            scanf("%d", &posicao);
            printf("%d\n", ord[posicao - 1]);
        }
    }

    return 0;
}