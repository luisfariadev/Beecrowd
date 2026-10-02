#include <stdio.h>

void caso1(int h1, int m1, int h2, int m2)
{
    int horas;
    int minutos;

    minutos = m2 - m1;

    if (h1 == h2)
    {
        horas = 24;
        horas = 24 * 60;

        if (m2 > m1)
        {
            horas = 0;
        }
    }
    else if (h1 > h2)
    {
        horas = 24 - h1;
        horas = horas + h2;
        horas = horas * 60;
    }

    printf("%d\n", horas + minutos);
}

void caso2(int h1, int m1, int h2, int m2)
{
    int horas;
    int minutos;

    horas = h2 - h1;
    horas = horas * 60;
    minutos = m2 - m1;

    printf("%d\n", horas + minutos);
}

int main()
{
    int h1, m1, h2, m2;

    while (scanf("%d %d %d %d", &h1, &m1, &h2, &m2) == 4 && (h1 != 0 || m1 != 0 || h2 != 0 || m2 != 0))
    {
        if (h1 >= h2)
        {
            caso1(h1, m1, h2, m2);
        }
        else
        {
            caso2(h1, m1, h2, m2);
        }
    }

    return 0;
}