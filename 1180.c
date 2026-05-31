#include <stdio.h>

int main()
{
    int n, p, inicial, posicao;
    scanf("%d %d", &n, &inicial);
    int vetor[n];
    posicao = 0;

    for (int i = 1; i < n; i++)
    {
        scanf("%d", &p);

        if (p < inicial)
        {
            inicial = p;
            posicao = i;
        }
    }

    printf("Menor valor: %d\n", inicial);
    printf("Posicao: %d\n", posicao);

    return 0;
}