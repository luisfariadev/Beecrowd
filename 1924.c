#include <stdio.h>

int main()
{

    int n;
    char curso[50];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        fgets(curso, 50, stdin);
    }

    printf("Ciencia da Computacao\n");

    return 0;
}