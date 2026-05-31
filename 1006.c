#include <stdio.h>

int main()
{

    double A, B, C, M;
    scanf("%lf %lf %lf", &A, &B, &C);
    M = ((2 * A) + (3 * B) + (5 * C)) / 10;
    printf("MEDIA = %.1lf\n", M);

    return 0;
}