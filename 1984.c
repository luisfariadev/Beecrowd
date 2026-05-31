#include <stdio.h>

int main()
{

    long long n;
    scanf("%llu", &n);

    while (n > 0)
    {

        printf("%d", n % 10);
        n = n / 10;
    }

    printf("\n");

    return 0;
}