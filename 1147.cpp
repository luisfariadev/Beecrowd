#include <bits/stdc++.h>
using namespace std;

void liberamatriz(int **matriz, int l)
{
    for (int i = 0; i < l; i++)
    {
        free(matriz[i]);
    }

    free(matriz);
}

int **alocamatriz()
{
    int **matriz;
    matriz = (int **)malloc(8 * sizeof(int *));

    if (matriz == NULL)
    {
        return NULL;
    }

    for (int i = 0; i < 8; i++)
    {
        matriz[i] = (int *)calloc(8, sizeof(int));

        if (matriz[i] == NULL)
        {
            liberamatriz(matriz, i);
            return NULL;
        }
    }

    return matriz;
}

int analisacavalo(int **matriz, int linha, int coluna)
{
    int pos = 0;

    if (linha + 2 <= 7)
    {
        if (coluna - 1 >= 0)
        {
            matriz[linha + 2][coluna - 1] = 10;
            pos++;
        }

        if (coluna + 1 <= 7)
        {
            matriz[linha + 2][coluna + 1] = 10;
            pos++;
        }
    }

    if (linha - 2 >= 0)
    {
        if (coluna - 1 >= 0)
        {
            matriz[linha - 2][coluna - 1] = 10;
            pos++;
        }

        if (coluna + 1 <= 7)
        {
            matriz[linha - 2][coluna + 1] = 10;
            pos++;
        }
    }

    if (linha - 1 >= 0)
    {
        if (coluna - 2 >= 0)
        {
            matriz[linha - 1][coluna - 2] = 10;
            pos++;
        }

        if (coluna + 2 <= 7)
        {
            matriz[linha - 1][coluna + 2] = 10;
            pos++;
        }
    }

    if (linha + 1 <= 7)
    {
        if (coluna - 2 >= 0)
        {
            matriz[linha + 1][coluna - 2] = 10;
            pos++;
        }

        if (coluna + 2 <= 7)
        {
            matriz[linha + 1][coluna + 2] = 10;
            pos++;
        }
    }

    return pos;
}

void analisacasas(int **matriz, int linha, int coluna)
{
    if (linha - 1 >= 0)
    {
        if (coluna + 1 <= 7)
        {
            matriz[linha - 1][coluna + 1] = 2;
        }

        if (coluna - 1 >= 0)
        {
            matriz[linha - 1][coluna - 1] = 2;
        }
    }
}

int main()
{
    int caso = 1;
    int linha;
    char c;

    while (cin >> linha && linha != 0)
    {
        linha--;
        cin >> c;
        int coluna = c - 'a';
        int **matriz = alocamatriz();
        analisacavalo(matriz, linha, coluna);
        int quant = 0;

        for (int i = 0; i < 8; i++)
        {
            cin >> linha;
            cin >> c;
            linha--;
            coluna = c - 'a';

            analisacasas(matriz, linha, coluna);
        }

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (matriz[i][j] == 10)
                {
                    quant++;
                }
            }
        }

        cout << "Caso de Teste #" << caso << ": " << quant << " movimento(s)." << endl;
        caso++;
        liberamatriz(matriz, 8);
    }

    return 0;
}