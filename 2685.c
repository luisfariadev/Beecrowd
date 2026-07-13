#include <stdio.h>

int main()
{
    int m;

    while (scanf("%d", &m) != EOF)
    {

        if (m == 360 || m < 90)
        {
            printf("Bom Dia!!\n");
        }
        else if (m >= 90 && m < 180)
        {
            printf("Boa Tarde!!\n");
        }
        else if (m >= 180 && m < 270)
        {
            printf("Boa Noite!!\n");
        }
        else
        {
            printf("De Madrugada!!\n");
        }
    }

    return 0;
}