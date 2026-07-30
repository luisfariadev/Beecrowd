#include <stdio.h>

int main()
{
    float raio;
    scanf("%f", &raio);
    double valor = 2 * 3.14 * raio;
    printf("%.2lf\n", valor);

    return 0;
}