#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x, d;

    for (int i = 0; i < n; i++)
    {
        int somamaria = 0;
        int somajoao = 0;

        for (int j = 0; j < 6; j++)
        {
            scanf("%d %d", &x, &d);

            if (j < 3)
            {
                somajoao = somajoao + x * d;
            }
            else
            {
                somamaria = somamaria + x * d;
            }
        }

        if (somajoao > somamaria)
        {
            printf("JOAO\n");
        }
        else if (somamaria > somajoao)
        {
            printf("MARIA\n");
        }
    }

    return 0;
}