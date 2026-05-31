#include <stdio.h>

int main()
{

    int saida, tempo, fuso, t;
    scanf("%d %d %d", &saida, &tempo, &fuso);

    t = saida + tempo + fuso;

    if (t > 24)
    {
        t = t - 24;
    }

    if (t < 0)
    {
        t = 24 + t;
    }

    printf("%d\n", t);

    return 0;
}