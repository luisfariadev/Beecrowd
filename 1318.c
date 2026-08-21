#include <stdio.h>

int main()
{
    int n, m;

    while (scanf("%d %d", &n, &m) == 2 && (n != 0 && m != 0))
    {
        int quant = 0;
        int p = 0;
        int vetor[m];

        for (int i = 0; i < m; i++)
        {
            scanf("%d", &vetor[i]);
        }

        for (int i = 0; i < m; i++)
        {
            int controle = 0;

            for (int j = 0; j < m; j++)
            {
                if (i != j && vetor[i] == vetor[j])
                {
                    vetor[j] = p;
                    p--;
                    controle = 1;
                }
            }

            if (controle == 1)
            {
                quant++;
            }
        }

        printf("%d\n", quant);
    }

    return 0;
}