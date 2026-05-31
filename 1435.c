#include <stdio.h>

int main()
{

    int n;
    int distancialateral, distanciavertical, distancia;

    while (1)
    {
        scanf("%d", &n);

        if (n > 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (i > (n - 1) - i)
                {
                    distanciavertical = (n - 1) - i;
                }
                else
                {
                    distanciavertical = i;
                }

                for (int j = 0; j < n; j++)
                {
                    if (j > (n - 1) - j)
                    {
                        distancialateral = (n - 1) - j;
                    }
                    else
                    {
                        distancialateral = j;
                    }

                    if (distanciavertical > distancialateral)
                    {
                        distancia = distancialateral;
                    }
                    else
                    {
                        distancia = distanciavertical;
                    }

                    printf("%3d", distancia + 1);

                    if (j < n - 1)
                    {
                        printf(" ");
                    }
                }

                printf("\n");

                distancialateral = 0;
                distanciavertical = 0;
                distancia = 0;
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