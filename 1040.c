#include <stdio.h>

int main()
{
    float n1, n2, n3, n4, m, e, novamedia;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    m = ((2 * n1) + (3 * n2) + (4 * n3) + (n4)) / 10.0;

    if (m >= 7)
    {
        printf("Media: %.1f\nAluno aprovado.\n", m);
    }
    else if (m < 5)
    {
        printf("Media: %.1f\nAluno reprovado.\n", m);
    }
    else
    {
        printf("Media: %.1f\nAluno em exame.\n", m);
        scanf("%f", &e);
        printf("Nota do exame: %.1f\n", e);
        novamedia = (m + e) / 2;

        if (novamedia >= 5)
        {
            printf("Aluno aprovado.\nMedia final: %.1f\n", novamedia);
        }
        else
        {
            printf("Aluno reprovado.\nMedia final: %.1f\n", novamedia);
        }
    }

    return 0;
}