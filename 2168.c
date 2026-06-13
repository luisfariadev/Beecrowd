#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int matriz[n + 1][n + 1];

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (i == n || j == n)
            {
                break;
            }

            if (matriz[i][j] == 1 && matriz[i][j + 1] == 1 ||
                matriz[i][j] == 1 && matriz[i + 1][j] == 1 ||
                matriz[i][j] == 1 && matriz[i + 1][j + 1] == 1 ||
                matriz[i][j + 1] == 1 && matriz[i + 1][j] == 1 ||
                matriz[i][j + 1] == 1 && matriz[i + 1][j + 1] == 1 ||
                matriz[i + 1][j] == 1 && matriz[i + 1][j + 1] == 1)
            {
                printf("S");
            }
            else
            {
                printf("U");
            }
        }

        if (i == n)
        {
            break;
        }

        printf("\n");
    }

    return 0;
}