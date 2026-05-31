#include <stdio.h>

int main()
{

    int a, n, soma;
    scanf("%d", &a);
    soma = 0;

    do
    {
        scanf("%d", &n);
    } while (n <= 0);

    for (int i = 0; i <= n - 1; i++)
    {
        soma = soma + a + i;
    }

    printf("%d\n", soma);

    return 0;
}