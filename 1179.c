#include <stdio.h>

int main()
{
    int n, p, np;
    int par[5];
    int impar[5];
    p = 0;
    np = 0;

    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &n);

        if (n % 2 == 0)
        {
            if (p == 5)
            {
                for (int j = 0; j <= 4; j++)
                {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                p = 0;
                par[p] = n;
                p = p + 1;
            }
            else
            {
                par[p] = n;
                p = p + 1;
            }
        }
        else
        {
            if (np == 5)
            {
                for (int z = 0; z <= 4; z++)
                {
                    printf("impar[%d] = %d\n", z, impar[z]);
                }
                np = 0;
                impar[np] = n;
                np = np + 1;
            }
            else
            {
                impar[np] = n;
                np = np + 1;
            }
        }

        if (i == 14)
        {
            for (int z = 0; z < np; z++)
            {
                printf("impar[%d] = %d\n", z, impar[z]);
            }
            for (int j = 0; j < p; j++)
            {
                printf("par[%d] = %d\n", j, par[j]);
            }
        }
    }

    return 0;
}