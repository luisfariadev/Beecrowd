#include <stdio.h>

int main()
{
    float m;
    float temp;
    int hora;
    int min;
    int seg;

    while (scanf("%f", &m) != EOF)
    {
        hora = 0;
        min = 0;
        temp = (240) * m;
        hora = temp / 3600;
        temp = (int)temp % 3600;
        min = temp / 60;
        seg = (int)temp % 60;
        hora = 6 + hora;

        if (hora >= 24)
        {
            hora = hora - 24;
        }

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

        printf("%02d:%02d:%02d\n", hora, min, seg);
    }

    return 0;
}
