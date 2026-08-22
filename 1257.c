#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[55];
    int soma;
    char alfabeto[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n, p;
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++)
    {

        soma = 0;
        scanf("%d", &p);
        getchar();

        for (int j = 0; j < p; j++)
        {
            fgets(palavra, 52, stdin);
            int tam = strcspn(palavra, "\n");

            for (int z = 0; z < tam; z++)
            {
                for (int y = 0; y < 26; y++)
                {
                    if (palavra[z] == alfabeto[y])
                    {
                        soma = soma + y + j + z;
                    }
                }
            }
        }

        printf("%d\n", soma);
    }

    return 0;
}