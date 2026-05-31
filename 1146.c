#include <stdio.h>

int main()
{

    int x;

    while (1)
    {
        scanf("%d", &x);

        if (x == 0)
        {
            break;
        }

        for (int cont = 1; cont <= x; cont++)
        {
            if (cont > 1)
                printf(" ");

            printf("%d", cont);
        }

        printf("\n");
    }

    return 0;
}