#include <stdio.h>

int main()
{

    int n, alcool, gasolina, diesel;
    alcool = 0;
    gasolina = 0;
    diesel = 0;

    while (1)
    {
        scanf("%d", &n);

        if (n == 1)
        {
            alcool = alcool + 1;
        }
        else if (n == 2)
        {
            gasolina = gasolina + 1;
        }
        else if (n == 3)
        {
            diesel = diesel + 1;
        }
        else if (n == 4)
        {
            break;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}