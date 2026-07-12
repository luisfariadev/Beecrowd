#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fim;
    int x, y;
    int x1, y1;
    int x2, y2;
    int m, n;

    while (scanf("%d %d", &m, &n) != EOF)
    {
        int matriz[m][n];

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &matriz[i][j]);

                if (matriz[i][j] == 2)
                {
                    x2 = i;
                    y2 = j;
                }

                if (matriz[i][j] == 1)
                {
                    x1 = i;
                    y1 = j;
                }
            }
        }

        x = abs(x2 - x1);
        y = abs(y2 - y1);
        fim = x + y;
        printf("%d\n", fim);
    }

    return 0;
}
