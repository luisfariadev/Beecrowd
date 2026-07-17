#include <stdio.h>

int main()
{
    float temp;
    int cont = 0;
    int p;
    int n;
    char c;
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++)
    {
        temp = 0;
        p = 0;

        while (scanf("%c", &c) == 1 && c != '\n')
        {
            p++;
        }

        temp = 0.01 * p;
        printf("%.2f\n", temp);
    }

    return 0;
}