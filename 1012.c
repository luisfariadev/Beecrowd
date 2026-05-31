#include <stdio.h>

int main()
{

    double A, B, C, pi, triangulo, circulo, trapezio, quadrado, retangulo;
    scanf("%lf %lf %lf", &A, &B, &C);
    pi = 3.14159;
    triangulo = (A * C) / 2;
    circulo = pi * C * C;
    trapezio = ((A + B) * C) / 2;
    quadrado = B * B;
    retangulo = A * B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangulo, circulo, trapezio, quadrado, retangulo);

    return 0;
}