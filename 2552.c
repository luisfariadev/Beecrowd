#include <stdio.h>

int calculo(int i, int j, int n, int m, int matriz[n][m])
{
    int cont = 0;

    if (j == 0)
    {
        if (i == 0)
        {
            if (matriz[0][1] == 1)
            {
                cont = cont + 1;
            }
            if (matriz[1][0] == 1)
            {
                cont = cont + 1;
            }
        }

        else if (i == n - 1)
        {
            if (matriz[n - 1][1] == 1)
            {
                cont = cont + 1;
            }

            if (matriz[n - 2][0] == 1)
            {
                cont = cont + 1;
            }
        }
        else
        {
            if (matriz[i - 1][0] == 1)
            {
                cont = cont + 1;
            }

            if (matriz[i + 1][0] == 1)
            {
                cont = cont + 1;
            }

            if (matriz[i][j + 1] == 1)
            {
                cont = cont + 1;
            }
        }
    }
    else if (j == m - 1)
    {
        if (i == 0)
        {
            if (matriz[i][j - 1] == 1)
            {
                cont = cont + 1;
            }

            if (matriz[i + 1][j] == 1)
            {
                cont = cont + 1;
            }
        }
        else if (i == n - 1)
        {
            if (matriz[i][j - 1] == 1)
            {
                cont = cont + 1;
            }

            if (matriz[i - 1][j] == 1)
            {
                cont = cont + 1;
            }
        }
        else
        {
            if (matriz[i - 1][j] == 1)
            {
                cont = cont + 1;
            }

            if (matriz[i + 1][j] == 1)
            {
                cont = cont + 1;
            }

            if (matriz[i][j - 1] == 1)
            {
                cont = cont + 1;
            }
        }
    }
    else if (i == 0)
    {
        if (j == m - 1)
        {
            if (matriz[i][j - 1] == 1)
            {
                cont = cont + 1;
            }

            if (matriz[i + 1][j] == 1)
            {
                cont = cont + 1;
            }
        }
        else
        {
            if (matriz[i + 1][j] == 1)
            {
                cont = cont + 1;
            }

            if (matriz[i][j + 1] == 1)
            {
                cont = cont + 1;
            }

            if (matriz[i][j - 1] == 1)
            {
                cont = cont + 1;
            }
        }
    }
    else if (i == n - 1)
    {
        if (j == 0)
        {
            if (matriz[i - 1][j] == 1)
            {
                cont = cont + 1;
            }

            if (matriz[i][j + 1] == 1)
            {
                cont = cont + 1;
            }
        }
        else if (j == m - 1)
        {
            if (matriz[i - 1][j] == 1)
            {
                cont = cont + 1;
            }

            if (matriz[i][j - 1] == 1)
            {
                cont = cont + 1;
            }
        }
        else
        {
            if (matriz[i][j + 1] == 1)
            {
                cont = cont + 1;
            }

            if (matriz[i][j - 1] == 1)
            {
                cont = cont + 1;
            }

            if (matriz[i - 1][j] == 1)
            {
                cont = cont + 1;
            }
        }
    }
    else
    {
        if (matriz[i - 1][j] == 1)
        {
            cont = cont + 1;
        }

        if (matriz[i + 1][j] == 1)
        {
            cont = cont + 1;
        }

        if (matriz[i][j + 1] == 1)
        {
            cont = cont + 1;
        }

        if (matriz[i][j - 1] == 1)
        {
            cont = cont + 1;
        }
    }

    return cont;
}

int main()
{
    int n, m;

    while (scanf("%d %d", &n, &m) != EOF)
    {
        int matriz[n][m];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &matriz[i][j]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matriz[i][j] == 1)
                {
                    printf("9");
                }
                else
                {
                    printf("%d", calculo(i, j, n, m, matriz));
                }
            }

            printf("\n");
        }
    }

    return 0;
}