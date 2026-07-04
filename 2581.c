#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char pergunta[100];

    for (int i = 0; i < n; i++)
    {
        fgets(pergunta, 100, stdin);
        printf("I am Toorg!\n");
    }

    return 0;
}