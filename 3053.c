#include <stdio.h>

int main()
{
    int n, motivimento;
    scanf("%d", &n);
    getchar();

    char copo;
    scanf("%c", &copo);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &motivimento);

        if (copo == 'A')
        {
            if (motivimento == 1)
            {
                copo = 'B';
            }
            else if (motivimento == 3)
            {
                copo = 'C';
            }
        }
        else if (copo == 'B')
        {
            if (motivimento == 1)
            {
                copo = 'A';
            }
            else if (motivimento == 2)
            {
                copo = 'C';
            }
        }
        else if (copo == 'C')
        {
            if (motivimento == 2)
            {
                copo = 'B';
            }
            else if (motivimento == 3)
            {
                copo = 'A';
            }
        }
    }

    printf("%c\n", copo);

    return 0;
}