#include <bits/stdc++.h>
using namespace std;

int main()
{
    int g;
    int posicao;
    int valor;
    int p;
    vector<int> vet;
    vector<int> aux;

    while (cin >> g && cin >> p && (g != 0 && p != 0))
    {
        vet.push_back(-1);
        aux.push_back(-1);

        for (int i = 0; i < p; i++)
        {
            cin >> posicao;
            vet.push_back(posicao);
        }

        int quant;
        cin >> quant;
        int maior = 0;
        int z;

        for (int i = 1; i <= quant; i++)
        {
            cin >> valor;
            aux.push_back(valor);

            if (valor > maior)
            {
                maior = valor;
                posicao = i;
            }
        }

        for (int i = 1; i <= quant; i++)
        {
            if (aux[i] == maior)
            {
                cout << vet[i] << " ";
            }
        }

        vet.clear();
        aux.clear();
    }

    return 0;
}