#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char cavalo[5];
    char posicao[5];
    char alfabeto[10] = "abcdefgh";
    scanf("%s %s", cavalo, posicao);
    int p1;
    int p2;

    for (int i = 0; i < 8; i++)
    {
        if (alfabeto[i] == cavalo[0])
        {
            p1 = i;
            break;
        }
    }

    for (int i = 0; i < 8; i++)
    {
        if (alfabeto[i] == posicao[0])
        {
            p2 = i;
            break;
        }
    }

    int p = abs(p2 - p1);
    int z = abs(cavalo[1] - posicao[1]);

    if ((z == 2 && p == 1) || (z == 1 && p == 2))
    {
        printf("VALIDO\n");
    }
    else
    {
        printf("INVALIDO\n");
    }

    return 0;
}