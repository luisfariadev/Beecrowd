#include <stdio.h>

int main()
{

    int pulo, canos, alturaanterior, altura, controle;
    scanf("%d %d", &pulo, &canos);
    scanf("%d", &alturaanterior);
    controle = 1;

    for (int i = 1; i < canos; i++)
    {
        scanf("%d", &altura);

        if (pulo >= abs(altura - alturaanterior))
        {
            alturaanterior = altura;
        }
        else
        {
            controle = 0;
            break;
        }
    }

    if (controle == 1)
    {
        printf("YOU WIN\n");
    }
    else
    {
        printf("GAME OVER\n");
    }

    return 0;
}
