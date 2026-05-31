#include <stdio.h>

int main()
{

    int tomadas[4];
    int soma = 0;

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &tomadas[i]);
        soma = soma + tomadas[i];
    }

    soma = soma - 3;
    printf("%d\n", soma);

    return 0;
}
