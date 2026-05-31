#include <stdio.h>

int main()
{

    float a, b, c;
    scanf("%f %f", &a, &b);

    c = (b - a) / a;
    c = 100 * c;

    printf("%.2f%%\n", c);

    return 0;
}