#include <stdio.h>

int main()
{
    int n;
    float valor;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &valor);
        int dias = 0;

        while (valor > 1)
        {
            valor = valor / 2;
            dias++;
        }

        printf("%d dias\n", dias);
    }

    return 0;
}