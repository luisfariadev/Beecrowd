#include <stdio.h>

int main()
{
    int mes, dia, t;

    while (scanf("%d %d", &mes, &dia) == 2)
    {
        if (mes == 12 && dia == 25)
        {
            printf("E natal!\n");
        }
        else if (mes == 12 && dia > 25)
        {
            printf("Ja passou!\n");
        }
        else if (mes == 12 && dia == 24)
        {
            printf("E vespera de natal!\n");
        }
        else if (mes == 1)
        {
            t = 360 - dia;
            printf("Faltam %d dias para o natal!\n", t);
        }
        else if (mes == 2)
        {
            t = 360 - 31 - dia;
            printf("Faltam %d dias para o natal!\n", t);
        }
        else if (mes == 3)
        {
            t = 360 - 60 - dia;
            printf("Faltam %d dias para o natal!\n", t);
        }
        else if (mes == 4)
        {
            t = 360 - 91 - dia;
            printf("Faltam %d dias para o natal!\n", t);
        }
        else if (mes == 5)
        {
            t = 360 - 121 - dia;
            printf("Faltam %d dias para o natal!\n", t);
        }
        else if (mes == 6)
        {
            t = 360 - 152 - dia;
            printf("Faltam %d dias para o natal!\n", t);
        }
        else if (mes == 7)
        {
            t = 360 - 182 - dia;
            printf("Faltam %d dias para o natal!\n", t);
        }
        else if (mes == 8)
        {
            t = 360 - 213 - dia;
            printf("Faltam %d dias para o natal!\n", t);
        }
        else if (mes == 9)
        {
            t = 360 - 244 - dia;
            printf("Faltam %d dias para o natal!\n", t);
        }
        else if (mes == 10)
        {
            t = 360 - 274 - dia;
            printf("Faltam %d dias para o natal!\n", t);
        }
        else if (mes == 11)
        {
            t = 360 - 305 - dia;
            printf("Faltam %d dias para o natal!\n", t);
        }
        else if (mes == 12)
        {
            t = 360 - 335 - dia;
            printf("Faltam %d dias para o natal!\n", t);
        }
    }

    return 0;
}