#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("Invertido = ");

    while (n != 0)
    {
        printf("%d", n % 10);
        n = n / 10;
    }

    printf("\n");

    return 0;
}