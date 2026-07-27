#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int vetor[n];
    int maior = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);

        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }

    maior++;

    while (1)
    {
        int controle = 1;

        for (int i = 0; i < n; i++)
        {
            if (maior % vetor[i] == 0 && vetor[i] != 1)
            {
                controle = 0;
                break;
            }
        }

        if (controle == 1)
        {
            break;
        }
        else
        {
            maior++;
        }
    }

    printf("%d\n", maior);

    return 0;
}