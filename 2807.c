#include <stdio.h>

int main()
{
    int a = 1;
    int b = 1;
    int c;
    int n;
    scanf("%d", &n);

    int vetor[n + 2];
    vetor[n - 1] = 1;
    vetor[n - 2] = 1;

    for (int i = n - 3; i >= 0; i--)
    {
        c = a + b;
        vetor[i] = c;
        a = b;
        b = c;
    }

    for (int i = 0; i <= n - 1; i++)
    {
        if (i == n - 1)
        {
            printf("%d\n", vetor[i]);
        }
        else
        {
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}