#include <stdio.h>

int main()
{
    int p = 0;
    int total;
    scanf("%d", &total);
    int m;
    scanf("%d", &m);
    int vetor[m];

    for (int i = 0; i < m; i++)
    {
        int controle = 1;
        scanf("%d", &vetor[i]);

        for (int j = 0; j < i; j++)
        {
            if (vetor[i] == vetor[j] && i != j)
            {
                controle = 0;
            }
        }

        if (controle == 1)
        {
            p++;
        }
    }

    total = total - p;
    printf("%d\n", total);

    return 0;
}