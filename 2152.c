#include <stdio.h>

int main()
{
    int n, h, m, o;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &h, &m, &o);

        if (o == 1)
        {
            printf("%02d:%02d - A porta abriu!\n", h, m);
        }
        else
        {
            printf("%02d:%02d - A porta fechou!\n", h, m);
        }
    }

    return 0;
}