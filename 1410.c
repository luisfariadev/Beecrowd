#include <stdio.h>

int main()
{
    int atacante;
    int defensor;

    while (scanf("%d %d", &atacante, &defensor) == 2 && (atacante != 0 && defensor != 0))
    {
        int posicao;
        int defensorproximo;
        int atacanteproximo;
        int DisAtacante;
        int DistDefensor[defensor];

        for (int i = 0; i < atacante; i++)
        {
            scanf("%d", &DisAtacante);

            if (i == 0)
            {
                atacanteproximo = DisAtacante;
            }
            else if (DisAtacante < atacanteproximo)
            {
                atacanteproximo = DisAtacante;
            }
        }

        for (int i = 0; i < defensor; i++)
        {
            scanf("%d", &DistDefensor[i]);

            if (i == 0)
            {
                defensorproximo = DistDefensor[i];
                posicao = i;
            }
            else if (DistDefensor[i] < defensorproximo)
            {
                defensorproximo = DistDefensor[i];
                posicao = i;
            }
        }

        DistDefensor[posicao] = 1000000;

        for (int i = 0; i < defensor; i++)
        {
            if (i == 0)
            {
                defensorproximo = DistDefensor[i];
            }
            else if (DistDefensor[i] < defensorproximo)
            {
                defensorproximo = DistDefensor[i];
            }
        }

        if (atacanteproximo < defensorproximo)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }

    return 0;
}