#include <stdio.h>
#include <math.h>

int main()
{
    int quant;
    int h;
    int m;
    double valor[100005];

    while (scanf("%d %d", &h, &m) != EOF)
    {
        double cal = 0;
        double media = 0;
        h = h * 60;
        quant = h / m;

        for (int i = 1; i <= quant; i++)
        {
            scanf("%lf", &valor[i]);
            media = media + valor[i];
        }

        media = media / quant;

        for (int i = 1; i <= quant; i++)
        {
            cal = cal + (pow(valor[i] - media, 2)) / (quant - 1);
        }

        cal = sqrt(cal);

        printf("%.5lf\n", cal);
    }

    return 0;
}