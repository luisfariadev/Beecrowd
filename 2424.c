#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if ((a <= 432 && a >= 0) && (b <= 468 && b >= 0))
    {
        printf("dentro\n");
    }
    else
    {
        printf("fora\n");
    }
    return 0;
}