#include <stdio.h>
#include <string.h>

void vencedor(char dodo[], char leo[], char pepper[])
{
    if (strcmp(dodo, "papel") == 0 && strcmp(leo, "pedra") == 0 && strcmp(pepper, "pedra") == 0)
    {
        printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
    }
    else if (strcmp(dodo, "tesoura") == 0 && strcmp(leo, "papel") == 0 && strcmp(pepper, "papel") == 0)
    {
        printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
    }
    else if (strcmp(dodo, "pedra") == 0 && strcmp(leo, "tesoura") == 0 && strcmp(pepper, "tesoura") == 0)
    {
        printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
    }
    else if (strcmp(dodo, "pedra") == 0 && strcmp(leo, "papel") == 0 && strcmp(pepper, "pedra") == 0)
    {
        printf("Iron Maiden's gonna get you, no matter how far!\n");
    }
    else if (strcmp(dodo, "papel") == 0 && strcmp(leo, "tesoura") == 0 && strcmp(pepper, "papel") == 0)
    {
        printf("Iron Maiden's gonna get you, no matter how far!\n");
    }
    else if (strcmp(dodo, "tesoura") == 0 && strcmp(leo, "pedra") == 0 && strcmp(pepper, "tesoura") == 0)
    {
        printf("Iron Maiden's gonna get you, no matter how far!\n");
    }
    else if (strcmp(dodo, "pedra") == 0 && strcmp(leo, "pedra") == 0 && strcmp(pepper, "papel") == 0)
    {
        printf("Urano perdeu algo muito precioso...\n");
    }
    else if (strcmp(dodo, "papel") == 0 && strcmp(leo, "papel") == 0 && strcmp(pepper, "tesoura") == 0)
    {
        printf("Urano perdeu algo muito precioso...\n");
    }
    else if (strcmp(dodo, "tesoura") == 0 && strcmp(leo, "tesoura") == 0 && strcmp(pepper, "pedra") == 0)
    {
        printf("Urano perdeu algo muito precioso...\n");
    }
    else
    {
        printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
    }
}

int main()
{
    char dodo[10];
    char leo[10];
    char pepper[10];

    while (scanf("%s %s %s", dodo, leo, pepper) != EOF)
    {
        vencedor(dodo, leo, pepper);
    }

    return 0;
}