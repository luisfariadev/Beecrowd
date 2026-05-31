#include <stdio.h>

int main()
{

    int n;
    float x, y, z, media;
    scanf("%d", &n);

    for (int cont = 0; cont < n; cont = cont + 1)
    {
        scanf("%f %f %f", &x, &y, &z);
        media = (2 * x + 3 * y + 5 * z) / 10;
        printf("%.1f\n", media);
    }

    return 0;
}
