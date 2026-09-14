#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, valor;

    while (scanf("%d %d", &a, &b) == 2 && (a != 0 && b != 0))
    {
        int limite = 0;
        int maior = 0;
        int anterior = 0;
        int posicao_maior = 0;
        int posicao_anterior = 0;

        int *p = (int *)calloc(10005, sizeof(int));

        for (int i = 0; i < a * b; i++)
        {
            scanf("%d", &valor);
            p[valor] = p[valor] + 1;

            if (valor > limite)
            {
                limite = valor;
            }
        }

        for (int i = 0; i <= limite; i++)
        {
            if (p[i] > maior)
            {
                if (i != 0)
                {
                    posicao_anterior = posicao_maior;
                    anterior = maior;

                    maior = p[i];
                    posicao_maior = i;
                }
                else
                {
                    maior = p[i];
                    posicao_maior = i;
                }
            }
            else if (p[i] < maior && p[i] > anterior)
            {
                posicao_anterior = i;
                anterior = p[i];
            }
        }

        for (int i = 0; i <= limite; i++)
        {
            if (p[i] == p[posicao_anterior])
            {
                printf("%d ", i);
            }
        }

        printf("\n");
        free(p);
    }

    return 0;
}