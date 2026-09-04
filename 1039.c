#include <stdio.h>
#include <math.h>

int main()
{
    int r1, x1, y1;
    int r2, x2, y2;

    while (scanf("%d %d %d %d %d %d", &r1, &x1, &y1, &r2, &x2, &y2) != EOF)
    {
        if (r2 > r1)
        {
            printf("MORTO\n");
            continue;
        }

        int dx = x2 - x1;
        int dy = y2 - y1;
        float dist = (dx * dx) + (dy * dy);
        dist = sqrt(dist);

        if (dist + r2 <= r1)
        {
            printf("RICO\n");
        }
        else
        {
            printf("MORTO\n");
        }
    }

    return 0;
}