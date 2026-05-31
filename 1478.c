#include <stdio.h>

int main()
{

    int n;
    int g = 1;

    while (1)
    {
        scanf("%d", &n);

        if (n > 0)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = i; j >= 1; j--)
                {
                    if (j == 1)
                    {
                        for (int p = i - j + 1; p <= n; p++)
                        {
                            printf("%3d", g);
                            if (p < n)
                                printf(" ");
                            g = g + 1;
                        }
                        break;
                    }
                    else
                    {
                        printf("%3d", j);
                        printf(" ");
                    }
                }
                printf("\n");
                g = 1;
            }
            printf("\n");
        }
        else
        {
            break;
        }
    }

    return 0;
}