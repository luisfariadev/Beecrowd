#include <stdio.h>

int main()
{
    int t1, t2;
    int tt1, tt2;
    int time1 = 0;
    int time2 = 0;
    char c;

    int n;
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++)
    {
        time1 = 0;
        time2 = 0;

        // Primeira partida

        scanf("%d", &t1);
        time1 = time1 + t1;
        getchar();

        scanf("%c", &c);

        scanf("%d", &t2);
        time2 = time2 + t2;
        getchar();

        // Segunda Partida

        scanf("%d", &tt2);
        time2 = time2 + tt2;
        getchar();

        scanf("%c", &c);

        scanf("%d", &tt1);
        time1 = time1 + tt1;
        getchar();

        if (time1 == time2)
        {
            if (t2 > tt1)
            {
                printf("Time 2\n");
            }
            else if (tt1 > t2)
            {
                printf("Time 1\n");
            }
            else
            {
                printf("Penaltis\n");
            }
        }
        else if (time1 > time2)
        {
            printf("Time 1\n");
        }
        else if (time2 > time1)
        {
            printf("Time 2\n");
        }
    }

    return 0;
}