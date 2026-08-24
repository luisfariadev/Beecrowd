#include <stdio.h>

int buscalivre(int *pessoas, int posicao, int quantpessoas)
{
    int verificados = 0;

    while (1)
    {
        if (pessoas[posicao] != 0)
        {
            return posicao;
        }

        posicao++;
        verificados++;

        if (verificados >= quantpessoas)
        {
            return -1;
        }

        if (posicao == quantpessoas)
        {
            posicao = 0;
        }
    }
}

int main()
{
    int caso = 0;
    int nc;
    int quantpessoas;
    int salto;
    scanf("%d", &nc);

    for (int i = 0; i < nc; i++)
    {
        caso++;
        int posicao = 0;
        scanf("%d %d", &quantpessoas, &salto);
        int vivos = quantpessoas;
        int pessoas[quantpessoas];

        for (int j = 0; j < quantpessoas; j++)
        {
            pessoas[j] = j + 1;
        }

        while (vivos > 1)
        {
            for (int i = 0; i < salto - 1; i++)
            {
                posicao = buscalivre(pessoas, posicao, quantpessoas);

                if (posicao + 1 == quantpessoas)
                {
                    posicao = 0;
                }
                else
                {
                    posicao++;
                }
            }

            posicao = buscalivre(pessoas, posicao, quantpessoas);

            pessoas[posicao] = 0;
            vivos--;

            posicao++;

            if (posicao == quantpessoas)
            {
                posicao = 0;
            }
        }

        for (int j = 0; j < quantpessoas; j++)
        {
            if (pessoas[j] != 0)
            {
                printf("Case %d: %d\n", caso, pessoas[j]);
                break;
            }
        }
    }

    return 0;
}