#include <stdio.h>

int main()
{

    int inter, gremio, grenal, empate, vitoriagremio, vitoriainter, repeticao;
    grenal = 0;
    empate = 0;
    vitoriainter = 0;
    vitoriagremio = 0;

    while (1)
    {
        grenal = grenal + 1;
        scanf("%d %d", &inter, &gremio);

        if (gremio == inter)
        {
            empate = empate + 1;
        }
        else if (gremio > inter)
        {
            vitoriagremio = vitoriagremio + 1;
        }
        else
        {
            vitoriainter = vitoriainter + 1;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &repeticao);

        if (repeticao != 1)
        {
            break;
        }
    }

    printf("%d grenais\n", grenal);
    printf("Inter:%d\n", vitoriainter);
    printf("Gremio:%d\n", vitoriagremio);
    printf("Empates:%d\n", empate);

    if (vitoriagremio < vitoriainter)
    {
        printf("Inter venceu mais\n");
    }
    else
    {
        printf("Gremio venceu mais\n");
    }

    return 0;
}