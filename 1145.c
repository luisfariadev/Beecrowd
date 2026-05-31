#include <stdio.h>

int main()
{

    int x, y, b;
    scanf("%d %d", &x, &y);
    b = 0;

    while (b < y)
    {

        for (int i = 1; i <= x; i = i + 1)
        {
            if (i > 1)
            {
                printf(" ");
            }

            b = b + 1;
            printf("%d", b);
        }
        printf("\n");
    }

    return 0;
}