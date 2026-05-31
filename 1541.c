#include <stdio.h>
#include <math.h>

int main()
{

    int base, altura;
    float percentual, terreno;

    while (1)
    {
        scanf("%d", &base);
        if (base == 0)
        {
            break;
        }
        else
        {
            scanf("%d %f", &altura, &percentual);
        }

        percentual = percentual / 100;
        terreno = sqrt((base * altura / percentual));
        terreno = (int)terreno;
        printf("%.0f\n", terreno);
    }

    return 0;
}
