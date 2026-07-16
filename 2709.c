#include <stdio.h>

void primo(int soma)
{
    int controle = 1;

    for (int i = 2; i < soma; i++)
    {
        if (soma % i == 0)
        {
            controle = 0;
        }
    }

    if (controle == 1 && soma != 0 && soma != 1)
    {
        printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
    }
    else
    {
        printf("Bad boy! I’ll hit you.\n");
    }
}

int main()
{
    int n;
    int salto;
    int soma;

    while (scanf("%d", &n) != EOF)
    {
        soma = 0;
        int valores[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &valores[i]);
        }

        scanf("%d", &salto);

        for (int i = n - 1; i >= 0; i = i - salto)
        {
            soma = soma + valores[i];
        }

        primo(soma);
    }

    return 0;
}