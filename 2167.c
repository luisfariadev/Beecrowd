#include <stdio.h>

int main()
{

    int n, medidas, anterior, cont;
    scanf("%d", &n);
    cont = 0;

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &medidas);

        if (i > 1 && cont == 0)
        {
            if (medidas < anterior)
            {
                cont = i;
            }
        }

        anterior = medidas;
    }

    printf("%d\n", cont);

    return 0;
}