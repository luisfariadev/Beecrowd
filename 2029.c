#include <stdio.h>

int main()
{

    float volume, d;
    float altura, area;

    while (scanf("%f %f", &volume, &d) == 2)
    {
        d = d / 2;
        area = 3.14 * d * d;
        altura = volume / area;

        printf("ALTURA = %.2f\n", altura);
        printf("AREA = %.2f\n", area);
    }

    return 0;
}