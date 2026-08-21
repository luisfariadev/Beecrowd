#include <stdio.h>
#include <math.h>

int main()
{
    double g = 9.80665;
    double n = 3.14159;
    double angulo;
    double velocidade;
    double altura;
    int p1;
    int p2;
    int tentativas;
    double tempsubida;
    double alturamaxima;
    double velomaximafinal;
    double tempqueda;
    double tempofinal;
    double velocidadehorizontal;
    double velocidadevertical;
    double distahorizontal;

    while (scanf("%lf %d %d", &altura, &p1, &p2) != EOF)
    {
        scanf("%d", &tentativas);

        for (int i = 0; i < tentativas; i++)
        {
            scanf("%lf %lf", &angulo, &velocidade);
            angulo = angulo * (n / 180);

            velocidadevertical = sin(angulo) * velocidade;
            velocidadehorizontal = cos(angulo) * velocidade;

            tempsubida = velocidadevertical / g;
            alturamaxima = altura + (velocidadevertical * tempsubida) - (g * tempsubida * tempsubida) / 2;

            velomaximafinal = sqrt(2 * g * alturamaxima);
            tempqueda = velomaximafinal / g;
            tempofinal = tempqueda + tempsubida;

            distahorizontal = velocidadehorizontal * tempofinal;

            printf("%.5lf -> ", distahorizontal);

            if (distahorizontal >= p1 && distahorizontal <= p2)
            {
                printf("DUCK\n");
            }
            else
            {
                printf("NUCK\n");
            }
        }
    }

    return 0;
}