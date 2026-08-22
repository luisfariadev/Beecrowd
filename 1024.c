#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void desloca(char *alfabeto, char *alfabetom, char *texto)
{
    int posicao;

    for (int i = 0; i < strcspn(texto, "\n"); i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (texto[i] == alfabetom[j])
            {
                texto[i] = alfabetom[j] + 3;
                break;
            }
            else if (texto[i] == alfabeto[j])
            {
                texto[i] = alfabeto[j] + 3;
                break;
            }
        }
    }
}

char *inverte(char *texto)
{
    int a = 0;
    char *invertido = (char *)malloc(1002 * sizeof(char));
    int p = strlen(texto);
    p = p - 2;

    for (int i = p; i >= 0; i--)
    {
        invertido[a] = texto[i];
        a++;
    }

    invertido[a] = '\0';

    return invertido;
}

void deslocametade(char *invert)
{
    int tam = strlen(invert);
    tam = tam / 2;

    for (int i = tam; i < strcspn(invert, "\n"); i++)
    {
        invert[i] = invert[i] - 1;
    }

    printf("%s\n", invert);
}

int main()
{
    char alfabetom[] = "abcdefghijklmnopqrstuvwxyz";
    char alfabeto[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char texto[1005];

    int n;
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++)
    {
        fgets(texto, 1002, stdin);

        desloca(alfabeto, alfabetom, texto);
        char *invert = inverte(texto);
        deslocametade(invert);
        free(invert);
    }

    return 0;
}