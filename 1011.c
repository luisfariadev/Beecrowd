#include <stdio.h>

int main()
{
    double pi, r, v;
    scanf("%lf", &r);
    pi = 3.14159;
    v = (4.0 / 3) * pi * r * r * r;
    printf("VOLUME = %.3lf\n", v);

    return 0;
}