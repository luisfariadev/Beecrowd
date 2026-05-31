#include <stdio.h>

int main()
{

    double n[100];
    scanf("%lf", &n[0]);

    for (int i = 0; i < 100; i = i + 1)
    {
        printf("N[%d] = %.4lf\n", i, n[i]);
        n[i + 1] = n[i] / 2;
    }

    return 0;
}