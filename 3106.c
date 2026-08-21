#include <stdio.h>

int main()
{
    int n, alunos;
    scanf("%d", &n);
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &alunos);
        total = total + (alunos - alunos % 3);
    }

    printf("%d\n", total);

    return 0;
}