#include <stdio.h>

int main()
{
    char anterior;
    char letra;
    char palavra;
    int p = 1;
    int controle = 1;

    while (scanf("%c", &palavra) == 1 && palavra != '*')
    {
        if (palavra == '\n')
        {
            if (controle == 1)
            {
                printf("Y\n");
            }
            else
            {
                printf("N\n");
            }

            p = 0;
            controle = 1;
        }

        if (p == 1)
        {
            letra = palavra;
        }

        if (anterior == ' ')
        {
            if (palavra != letra && palavra != letra - 32 && palavra != letra + 32)
            {
                controle = 0;
            }
        }

        anterior = palavra;
        p++;
    }

    return 0;
}