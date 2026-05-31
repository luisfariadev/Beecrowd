#include <stdio.h>

int main()
{

    int n, x;
    scanf("%d", &n);

    for (int cont = 0; cont < n; cont = cont + 1)
    {
        scanf("%d", &x);

        if (x == 0)
        {
            printf("NULL\n");
        }

        if (x % 2 == 0 && x > 0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if (x % 2 == 0 && x < 0)
        {
            printf("EVEN NEGATIVE\n");
        }

        if (x % 2 != 0 && x > 0)
        {
            printf("ODD POSITIVE\n");
        }
        else if (x % 2 != 0 && x < 0)
        {
            printf("ODD NEGATIVE\n");
        }
    }

    return 0;
}