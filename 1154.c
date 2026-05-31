#include <stdio.h>

int main()
{

    int idade, numero, soma;
    float media;
    soma = 0;
    numero = 0;

    while (1)
    {
        scanf("%d", &idade);

        if (idade >= 0)
        {
            soma = soma + idade;
            numero = numero + 1;
            media = (float)soma / numero;
        }
        else
        {
            break;
        }
    }

    printf("%.2f\n", media);

    return 0;
}
