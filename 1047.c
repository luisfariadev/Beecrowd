#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora, minuto;
    int horainicial, minutoinicial, horafinal, minutofinal;
    scanf("%d %d %d %d", &horainicial, &minutoinicial, &horafinal, &minutofinal);

    if (horafinal > horainicial)
    {
        if (minutofinal > minutoinicial)
        {
            hora = horafinal - horainicial;
            minuto = minutofinal - minutoinicial;
        }
        else
        {
            minuto = 60 - minutoinicial + minutofinal;
            hora = horafinal - horainicial - 1;
        }
    }
    else if (horafinal == horainicial)
    {
        if (minutofinal > minutoinicial)
        {
            hora = 0;
            minuto = minutofinal - minutoinicial;
        }
        else if (minutofinal == minutoinicial)
        {
            hora = 24;
            minuto = 0;
        }
        else
        {
            hora = 23;
            minuto = 60 - minutoinicial + minutofinal;
        }
    }
    else
    {
        if (minutofinal > minutoinicial)
        {
            minuto = minutofinal - minutoinicial;
            hora = abs(horafinal - horainicial);
            hora = 24 - hora;
        }
        else if (minutofinal == minutoinicial)
        {
            minuto = 0;
            hora = abs(horafinal - horainicial);
            hora = 24 - hora;
        }
        else
        {
            minuto = 60 - minutoinicial + minutofinal;
            hora = abs(horafinal - horainicial);
            hora = 24 - hora - 1;
        }
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);

    return 0;
}