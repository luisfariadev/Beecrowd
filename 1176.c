#include <stdio.h>

int main()
{

    int n, p;
    unsigned long long termoa, termob, termoc;
    scanf("%d", &n);
    termoa = 0;
    termob = 1;
    termoc = 1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p);

        for (int j = 0; j < p; j++)
        {

            termoa = termob;
            termob = termoc;
            termoc = termoa + termob;
        }

        if (p == 0)
        {
            printf("Fib(0) = 0\n");
        }
        else
        {
            printf("Fib(%d) = %lld\n", p, termoa);
        }

        termoa = 0;
        termob = 1;
        termoc = 1;
    }

    return 0;
}