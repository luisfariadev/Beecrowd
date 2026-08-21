#include <stdio.h>
#include <string.h>

int main()
{
    int controle;
    int n, p;
    scanf("%d", &n);
    char palavra1[20];
    char palavra2[20];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p);
        controle = 1;

        for (int j = 0; j < p; j++)
        {
            scanf("%s", palavra1);

            if (j != 0)
            {
                if (strcmp(palavra1, palavra2) != 0)
                {
                    controle = 0;
                }
            }

            strcpy(palavra2, palavra1);
        }

        if (controle == 0)
        {
            printf("ingles\n");
        }
        else
        {
            printf("%s\n", palavra1);
        }
    }

    return 0;
}