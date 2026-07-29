#include <stdio.h>

int main()
{
    int carro = 0;
    int boneca = 0;
    char nome[10];
    char sexo;
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s %c", nome, &sexo);

        if (sexo == 'F')
        {
            boneca++;
        }
        else
        {
            carro++;
        }
    }

    printf("%d carrinhos\n", carro);
    printf("%d bonecas\n", boneca);

    return 0;
}