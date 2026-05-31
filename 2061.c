#include <stdio.h>
#include <string.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    char acao[8];

    for (int i = 0; i < m; i++)
    {
        scanf("%s", acao);

        if (strcmp(acao, "fechou") == 0)
        {
            n = n + 1;
        }
        else
        {
            n = n - 1;
        }
    }

    printf("%d\n", n);

    return 0;
}