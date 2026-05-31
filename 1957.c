#include <stdio.h>

int main()
{
    int n, resto;
    scanf("%d", &n);
    int vetor[32];
    int cont = 0;
    int divisao = n;

    while (divisao > 0)
    {
        resto = divisao % 16;
        vetor[cont] = resto;
        divisao = divisao / 16;
        cont = cont + 1;
    }

    for (int i = cont - 1; i >= 0; i--)
    {
        if (vetor[i] == 10)
        {
            printf("A");
        }
        else if (vetor[i] == 11)
        {
            printf("B");
        }
        else if (vetor[i] == 12)
        {
            printf("C");
        }
        else if (vetor[i] == 13)
        {
            printf("D");
        }
        else if (vetor[i] == 14)
        {
            printf("E");
        }
        else if (vetor[i] == 15)
        {
            printf("F");
        }
        else
        {
            printf("%d", vetor[i]);
        }
    }

    printf("\n");

    return 0;
}