#include <stdio.h>

int main()
{
    int m, n, id, game, soma;

    while (scanf("%d %d", &m, &n) != EOF)
    {
        soma = 0;

        for (int i = 0; i < m; i++)
        {
            scanf("%d %d", &id, &game);

            if (id == n && game == 0)
            {
                soma++;
            }
        }

        printf("%d\n", soma);
    }

    return 0;
}