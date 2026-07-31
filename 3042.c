#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d", &n) == 1 && n != 0)
    {
        int matriz[n][3];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                scanf("%d", &matriz[i][j]);
            }
        }

        int cont = 0;
        int posicao = 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (matriz[i][j] == 1 && j == posicao)
                {
                    if (j == 0)
                    {
                        if (matriz[i][1] == 0)
                        {
                            posicao = 1;
                            cont = cont + 1;
                        }
                        else if (matriz[i][2] == 0)
                        {
                            posicao = 2;
                            cont = cont + 2;
                        }
                    }
                    else if (j == 1)
                    {
                        if (matriz[i][0] == 0)
                        {
                            posicao = 0;
                            cont = cont + 1;
                        }
                        else if (matriz[i][2] == 0)
                        {
                            posicao = 2;
                            cont = cont + 1;
                        }
                    }
                    else
                    {
                        if (matriz[i][0] == 0)
                        {
                            posicao = 0;
                            cont = cont + 2;
                        }
                        else if (matriz[i][1] == 0)
                        {
                            posicao = 1;
                            cont = cont + 1;
                        }
                    }
                }
            }
        }

        printf("%d\n", cont);
    }

    return 0;
}