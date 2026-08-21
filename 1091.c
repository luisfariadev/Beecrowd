#include <stdio.h>

int main()
{
    int n;
    int a;
    int b;
    int divisaA;
    int divisaB;

    while (scanf("%d", &n) == 1 && n != 0)
    {
        scanf("%d %d", &divisaA, &divisaB);

        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &a, &b);

            if (a == divisaA || b == divisaB)
            {
                printf("divisa\n");
            }
            else if (a > divisaA && b > divisaB)
            {
                printf("NE\n");
            }
            else if (a > divisaA && b < divisaB)
            {
                printf("SE\n");
            }
            else if (a < divisaA && b > divisaB)
            {
                printf("NO\n");
            }
            else
            {
                printf("SO\n");
            }
        }
    }

    return 0;
}