#include <stdio.h>

int main()
{
    int cont;
    int n;
    int voto;

    while (scanf("%d", &n) != EOF)
    {
        cont = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &voto);

            if (voto == 1)
            {
                cont = cont + 1;
            }
        }

        if (cont >= 2 * n * 1.0 / 3)
        {
            printf("impeachment\n");
        }
        else
        {
            printf("acusacao arquivada\n");
        }
    }

    return 0;
}