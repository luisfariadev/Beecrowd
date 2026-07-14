#include <stdio.h>

int main()
{
    double a = 234.345;
    double b = 45.698;

    printf("%.6f - %.6f\n", a, b);

    printf("%.0f - %.0f\n", a, b);

    printf("%.1f - %.1f\n", a, b);

    printf("%.2f - %.2f\n", a, b);

    printf("%.3f - %.3f\n", a, b);

    printf("%e - %e\n", a, b);

    printf("%E - %E\n", a, b);

    printf("%g - %g\n", a, b);

    printf("%G - %G\n", a, b);

    return 0;
}