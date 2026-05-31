#include <stdio.h>

int main()
{

    float salario, novo, reajuste;
    scanf("%f", &salario);

    if (salario <= 400.00)
    {
        novo = 1.15 * salario;
        reajuste = 0.15 * salario;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", novo, reajuste);
    }
    else if (salario <= 800)
    {
        novo = 1.12 * salario;
        reajuste = 0.12 * salario;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", novo, reajuste);
    }
    else if (salario <= 1200)
    {
        novo = 1.1 * salario;
        reajuste = 0.1 * salario;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", novo, reajuste);
    }
    else if (salario <= 2000)
    {
        novo = 1.07 * salario;
        reajuste = 0.07 * salario;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", novo, reajuste);
    }
    else
    {
        novo = 1.04 * salario;
        reajuste = 0.04 * salario;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", novo, reajuste);
    }

    return 0;
}