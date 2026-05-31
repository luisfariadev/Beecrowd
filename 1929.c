#include <stdio.h>

int main()
{

    int vetor[4];

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int p = 0; p < 4; p++)
            {
                if (j != p && i != j && i != p)
                {
                    if (vetor[j] + vetor[p] > vetor[i] && vetor[p] + vetor[i] > vetor[j] && vetor[i] + vetor[j] > vetor[p])
                    {
                        printf("S\n");
                        return 0;
                    }
                }
            }
        }
    }

    printf("N\n");

    return 0;
}