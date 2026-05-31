#include <stdio.h>

int main()
{

    int n, maior, entrada, posicao;
    maior = 0;
    entrada = 1;

    for (int cont = 0; cont < 100; cont = cont + 1)
    {
        scanf("%d", &n);

        if (n > maior)
        {
            maior = n;
            posicao = entrada;
        }

        entrada = entrada + 1;
    }

    printf("%d\n%d\n", maior, posicao);

    return 0;
}