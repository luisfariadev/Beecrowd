#include <stdio.h>

int main()
{
    int n, resto, quantidade;
    scanf("%d", &n);
    printf("%d\n", n);

    quantidade = n / 100;
    printf("%d nota(s) de R$ 100,00\n", quantidade);
    resto = n % 100;

    quantidade = resto / 50;
    printf("%d nota(s) de R$ 50,00\n", quantidade);
    resto = resto % 50;

    quantidade = resto / 20;
    printf("%d nota(s) de R$ 20,00\n", quantidade);
    resto = resto % 20;

    quantidade = resto / 10;
    printf("%d nota(s) de R$ 10,00\n", quantidade);
    resto = resto % 10;

    quantidade = resto / 5;
    printf("%d nota(s) de R$ 5,00\n", quantidade);
    resto = resto % 5;

    quantidade = resto / 2;
    printf("%d nota(s) de R$ 2,00\n", quantidade);
    resto = resto % 2;

    quantidade = resto / 1;
    printf("%d nota(s) de R$ 1,00\n", quantidade);

    return 0;
}
