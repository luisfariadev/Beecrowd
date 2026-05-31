#include <stdio.h>

int main()
{

    float a, b, m;

    scanf("%f", &a);
    while (a < 0 || a > 10)
    {
        printf("nota invalida\n");
        scanf("%f", &a);
    }

    scanf("%f", &b);
    while (b < 0 || b > 10)
    {
        printf("nota invalida\n");
        scanf("%f", &b);
    }

    m = (a + b) / 2;
    printf("media = %.2lf\n", m);

    return 0;
}