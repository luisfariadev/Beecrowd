#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        int local;
        int vetor[m];
        int vetorfinal[m];
        int z = 0;

        for (int j = 0; j < m; j++)
        {
            scanf("%d", &vetor[j]);
        }

        for (int j = 0; j < m; j++)
        {
            int maior = 0;
            for (int p = 0; p < m; p++)
            {
                if ((vetor[p] > maior) && (vetor[p] % 2 != 0))
                {
                    maior = vetor[p];
                    local = p;
                }
            }

            if (maior != 0)
            {
                vetorfinal[z] = maior;
                z++;
                vetor[local] = 0;
            }
        }

        if (z == 0)
        {
            printf("\n");
        }
        else
        {
            int g = 0;
            int q = z - 1;

            while (1)
            {
                if (g == q)
                {
                    printf("%d\n", vetorfinal[g]);
                    g++;
                    break;
                }
                else
                {
                    printf("%d ", vetorfinal[g]);
                    g++;
                }

                if (q == g)
                {
                    printf("%d\n", vetorfinal[q]);
                    q--;
                    break;
                }
                else
                {
                    printf("%d ", vetorfinal[q]);
                    q--;
                }
            }
        }
    }

    return 0;
}