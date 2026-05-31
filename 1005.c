#include <stdio.h>

int main()
{

    double A, B, MA, MB, M;
    scanf("%lf %lf", &A, &B);
    MA = 3.5 * A;
    MB = 7.5 * B;
    M = (MA + MB) / 11;
    printf("MEDIA = %.5lf\n", M);

    return 0;
}