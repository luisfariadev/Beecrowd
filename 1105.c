#include <stdio.h>

typedef struct
{
    int nome;
    int reserva;

} Banco;

int main()
{
    int b, n;

    while (scanf("%d %d", &b, &n) == 2 && (b != 0 && n != 0))
    {
        int controle = 1;
        Banco banco[b];
        int bancoDEVEDOR;
        int bancoCREDOR;
        int debenture;

        for (int i = 0; i < b; i++)
        {
            scanf("%d", &banco[i].reserva);
            banco[i].nome = i + 1;
        }

        for (int i = 0; i < n; i++)
        {
            scanf("%d %d %d", &bancoDEVEDOR, &bancoCREDOR, &debenture);

            for (int j = 0; j < b; j++)
            {
                if (banco[j].nome == bancoDEVEDOR)
                {
                    banco[j].reserva = banco[j].reserva - debenture;
                }
                else if (banco[j].nome == bancoCREDOR)
                {
                    banco[j].reserva = banco[j].reserva + debenture;
                }
            }
        }

        for (int j = 0; j < b; j++)
        {
            if (banco[j].reserva < 0)
            {
                controle = 0;
                break;
            }
        }

        if (controle == 0)
        {
            printf("N\n");
        }
        else
        {
            printf("S\n");
        }
    }

    return 0;
}