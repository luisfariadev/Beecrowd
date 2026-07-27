#include <stdio.h>

int main()
{
    int k;
    scanf("%d", &k);
    int p = 0;
    int a = 1;
    int b = 2;
    int c;
    int vetor[100005];

    while (p < k)
    {
        c = a + b;

        if (c - b > 1)
        {
            int z = b + 1;

            while (z < c && p < k)
            {
                vetor[p] = z;
                p++;
                z++;
            }
        }

        a = b;
        b = c;
    }

    printf("%d\n", vetor[k - 1]);

    return 0;
}