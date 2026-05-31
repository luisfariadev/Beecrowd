#include <stdio.h>

int main()
{

    int hora, minuto, p;

    while (scanf("%d:%d", &hora, &minuto) == 2)
    {

        hora = 60 * hora;

        if (hora + minuto + 60 < 480)
        {
            printf("Atraso maximo: 0\n");
        }
        else
        {
            p = hora + minuto + 60 - 480;
            printf("Atraso maximo: %d\n", p);
        }
    }

    return 0;
}
