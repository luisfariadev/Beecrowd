#include <stdio.h>

int main()
{
    int v;
    int q;
    char palavra[30];

    while (scanf("%s", &palavra) != EOF)
    {
        scanf("%d", &q);

        for (int i = 0; i < q; i++)
        {
            scanf("%d", &v);
            printf("%c", palavra[v - 1]);
        }

        printf("\n");
    }

    return 0;
}