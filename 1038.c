#include <stdio.h>

int main()
{
    int quantidade, caractere;
    float resultado;
    scanf("%d %d", &caractere, &quantidade);

    if (caractere == 1)
    {
        resultado = 4.00 * quantidade;
        printf("Total: R$ %.2f\n", resultado);
    }
    else if (caractere == 2)
    {
        resultado = 4.50 * quantidade;
        printf("Total: R$ %.2f\n", resultado);
    }
    else if (caractere == 3)
    {
        resultado = 5.00 * quantidade;
        printf("Total: R$ %.2f\n", resultado);
    }
    else if (caractere == 4)
    {
        resultado = 2.00 * quantidade;
        printf("Total: R$ %.2f\n", resultado);
    }
    else if (caractere == 5)
    {
        resultado = 1.50 * quantidade;
        printf("Total: R$ %.2f\n", resultado);
    }

    return 0;
}