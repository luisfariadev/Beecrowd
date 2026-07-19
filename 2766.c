#include <stdio.h>

typedef struct
{
    char nome[31];

} Nome;

int main()
{
    Nome nome[10];

    while (scanf("%s %s %s %s %s %s %s %s %s %s", nome[0].nome, nome[1].nome, nome[2].nome,
                 nome[3].nome, nome[4].nome, nome[5].nome, nome[6].nome, nome[7].nome, nome[8].nome,
                 nome[9].nome) != EOF)
    {
        printf("%s\n%s\n%s\n", nome[2].nome, nome[6].nome, nome[8].nome);
    }

    return 0;
}