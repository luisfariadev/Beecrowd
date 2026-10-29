#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();

    char sobrenome[50];
    int posicao[50];

    for (int t = 0; t < n; t++)
    {
        int i = 0;
        int j = 0;

        while (scanf("%c", &sobrenome[i]) == 1 && sobrenome[i] != '\n')
        {
            if (sobrenome[i] == 'A' || sobrenome[i] == 'E' || sobrenome[i] == 'I' || sobrenome[i] == 'O' ||
                sobrenome[i] == 'U' || sobrenome[i] == 'a' || sobrenome[i] == 'e' || sobrenome[i] == 'i' ||
                sobrenome[i] == 'o' || sobrenome[i] == 'u')
            {
                posicao[j] = i;
                j++;
            }

            i++;
        }

        sobrenome[i] = '\0';
        int controle = 0;

        if (posicao[0] >= 3)
        {
            printf("%s nao eh facil\n", sobrenome);
            continue;
        }

        if ((i - 1) - posicao[j - 1] >= 3)
        {
            printf("%s nao eh facil\n", sobrenome);
            continue;
        }

        for (int p = 1; p < j; p++)
        {
            if (posicao[p] - posicao[p - 1] >= 4)
            {
                controle = 1;
                printf("%s nao eh facil\n", sobrenome);
                break;
            }
        }

        if (controle == 0)
        {
            printf("%s eh facil\n", sobrenome);
        }
    }

    return 0;
}