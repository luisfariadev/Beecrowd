#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    if (A == 0)
    {
        printf("Impossivel calcular\n");
        return 0;
    }

    double delta;
    delta = B * B - (4 * A * C);
    if (delta < 0)
    {
        printf("Impossivel calcular\n");
        return 0;
    }

    double deltapositivo, deltanegativo;
    deltapositivo = (-B + sqrt(delta)) / (2 * A);
    deltanegativo = (-B - sqrt(delta)) / (2 * A);
    printf("R1 = %.5lf\n", deltapositivo);
    printf("R2 = %.5lf\n", deltanegativo);

    return 0;
}