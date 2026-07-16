#include <stdio.h>
#include <string.h>

int main()
{
    char alfabeto[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
                         'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    int cont;
    int p1;
    int n;

    while (scanf("%d", &n) != EOF)
    {
        getchar();

        for (int i = 0; i < n; i++)
        {
            p1 = 0;
            cont = 0;
            char letra[100];
            fgets(letra, 100, stdin);
            int pos = strcspn(letra, "\n");

            for (int j = 0; j < pos; j++)
            {
                if (letra[j] == ' ')
                {
                    cont = cont + 1;
                }

                if (letra[j] != ' ' && cont == 0)
                {
                    p1 = p1 + 1;
                }
            }

            p1 = p1 - 1;
            printf("%c\n", alfabeto[p1 + 3 * cont]);
        }
    }

    return 0;
}