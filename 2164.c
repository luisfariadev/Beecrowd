#include <stdio.h>
#include <math.h>

int main()
{

    int n;
    double p, s, d;
    scanf("%d", &n);

    s = pow((1 + sqrt(5)) / (2), n) - pow((1 - sqrt(5)) / (2), n);
    d = sqrt(5);
    p = s / d;

    printf("%.1lf\n", p);

    return 0;
}