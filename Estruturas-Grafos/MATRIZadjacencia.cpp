#include <bits/stdc++.h>
#define max 100
using namespace std;

int main()
{
    // Matriz de Adjacência tem que ser uma matriz quadrada
    cout << "Digite o tamanho da matriz: ";
    int tam;
    cin >> tam;

    int matriz[max][max];

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (i == 0)
            {
                matriz[i][j] = 0;
            }
            else
            {
                matriz[i][j] = -1;
            }
        }
    }

    cout << "Digite a quantidade de arestas: ";
    int quant;
    cin >> quant;

    int a;
    int b;

    for (int i = 0; i < quant; i++)
    {
        // Se o grafo é não direcionado, eu insiro somente na diagonal principal e inferior
        cin >> a;
        cin >> b;

        if (a == b)
        {
            matriz[a][b] = 1;
        }
        else
        {
            matriz[b][a] = 1;
            matriz[a][b] = 1;
        }
    }

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            cout << matriz[i][j];
        }

        cout << endl;
    }

    return 0;
}