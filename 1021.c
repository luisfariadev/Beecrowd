#include <stdio.h>

int main()
{
    double n, resto;
    int quantidade;
    scanf("%lf", &n);
    n = n * 100;

    printf("NOTAS:\n");

    quantidade = n / 10000;
    printf("%d nota(s) de R$ 100.00\n", quantidade);
    resto = n - (10000 * quantidade);

    quantidade = resto / 5000;
    printf("%d nota(s) de R$ 50.00\n", quantidade);
    resto = resto - (5000 * quantidade);

    quantidade = resto / 2000;
    printf("%d nota(s) de R$ 20.00\n", quantidade);
    resto = resto - (2000 * quantidade);

    quantidade = resto / 1000;
    printf("%d nota(s) de R$ 10.00\n", quantidade);
    resto = resto - (1000 * quantidade);

    quantidade = resto / 500;
    printf("%d nota(s) de R$ 5.00\n", quantidade);
    resto = resto - (500 * quantidade);

    quantidade = resto / 200;
    printf("%d nota(s) de R$ 2.00\n", quantidade);
    resto = resto - (200 * quantidade);

    printf("MOEDAS:\n");

    quantidade = resto / 100;
    printf("%d moeda(s) de R$ 1.00\n", quantidade);
    resto = resto - (100 * quantidade);

    quantidade = resto / 50;
    printf("%d moeda(s) de R$ 0.50\n", quantidade);
    resto = resto - (50 * quantidade);

    quantidade = resto / 25;
    printf("%d moeda(s) de R$ 0.25\n", quantidade);
    resto = resto - (25 * quantidade);

    quantidade = resto / 10;
    printf("%d moeda(s) de R$ 0.10\n", quantidade);
    resto = resto - (10 * quantidade);

    quantidade = resto / 5;
    printf("%d moeda(s) de R$ 0.05\n", quantidade);
    resto = resto - (5 * quantidade);

    quantidade = resto / 1;
    printf("%d moeda(s) de R$ 0.01\n", quantidade);

    return 0;
}