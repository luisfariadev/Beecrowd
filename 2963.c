#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int vetor[n];
    int maior;
    int pos;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);

        if (i == 0)
        {
            maior = vetor[i];
            pos = i;
        }

        if (vetor[i] > maior)
        {
            maior = vetor[i];
            pos = i;
        }
    }

    if (pos == 0)
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }

    return 0;
}