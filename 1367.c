#include <stdio.h>
#include <string.h>

typedef struct
{
    char carac;
    int estado;
    int anterior;

} Letra;

int main()
{
    int cont;
    char letr;
    int valor;
    char cond[20];
    int n;

    while (scanf("%d", &n) == 1 && n != 0)
    {
        int somatempo = 0;
        int posicao;
        int p = 0;
        Letra letra[n];
        int correct = 0;

        for (int i = 0; i < n; i++)
        {
            letra[i].anterior = 0;
            letra[i].estado = 0;
        }

        for (int i = 0; i < n; i++)
        {
            int controle = 0;
            scanf(" %c %d %s", &letr, &valor, cond);

            if (i == 0)
            {
                letra[i].carac = letr;
            }
            else
            {
                for (int j = 0; j < p; j++)
                {
                    if (letra[j].carac == letr)
                    {
                        posicao = j;
                        controle = 1;
                    }
                }
            }

            if (controle == 0)
            {
                letra[p].carac = letr;

                if (strcmp(cond, "correct") == 0)
                {
                    somatempo = somatempo + valor;
                    letra[p].estado = 1;
                    correct++;
                }
                else
                {
                    letra[p].anterior = letra[p].anterior + 1;
                }

                p++;
            }
            if (controle == 1)
            {
                if (strcmp(cond, "correct") == 0)
                {
                    somatempo = somatempo + valor;
                    letra[posicao].estado = 1;
                    correct++;
                }
                else
                {
                    letra[posicao].anterior = letra[posicao].anterior + 1;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (letra[i].estado == 1 && letra[i].anterior > 0)
            {
                somatempo = somatempo + (20 * letra[i].anterior);
            }
        }

        printf("%d %d\n", correct, somatempo);
    }

    return 0;
}