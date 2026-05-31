#include <stdio.h>

int main()
{
    int n, dividendo;
    scanf("%d", &n);
    dividendo = 1;

    while (dividendo <= 10000)
    {
        if (dividendo % n == 2)
        {
            printf("%d\n", dividendo);
        }

        dividendo = dividendo + 1;
    }

    return 0;
}