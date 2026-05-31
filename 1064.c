#include <stdio.h>

int main()
{
    float a, media, m, soma, positivo;

    positivo = 0;
    soma = 0;

    for (int cont = 0; cont < 6; cont = cont + 1)
    {
        scanf("%f", &a);
        if (a > 0)
        {
            positivo = positivo + 1;
            soma = soma + a;
        }
    }

    m = soma / positivo;

    printf("%.0f valores positivos\n%.1f\n", positivo, m);

    return 0;
}