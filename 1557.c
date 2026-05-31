#include <stdio.h>
#include <math.h>

int main()
{

    int n, pot, form, cont;

    while (1)
    {
        scanf("%d", &n);

        if (n > 0)
        {
            cont = 1;
            form = pow(2, 2 * (n - 1));

            while (form / 10 != 0)
            {
                cont = cont + 1;
                form = form / 10;
            }

            for (int i = 0; i < n; i++)
            {

                for (int j = 0; j < n; j++)
                {
                    pot = pow(2, i + j);

                    if (j == n - 1)
                    {
                        printf("%*d", cont, pot);
                    }
                    else
                    {
                        printf("%*d ", cont, pot);
                    }
                }

                printf("\n");
                pot = 0;
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