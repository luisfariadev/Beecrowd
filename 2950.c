#include <stdio.h>

int main()
{
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);

    x = x + y;
    float resul;

    resul = (n * 1.0) / x;
    printf("%.2f\n", resul);

    return 0;
}