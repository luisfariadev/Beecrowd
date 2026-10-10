#include <bits/stdc++.h>
#define max 105
using namespace std;

int main()
{
    int g;
    int p;
    int posicao;
    int valor;
    vector<vector<int>> vet(105);
    vector<int> aux;
    int quant;

    while (cin >> g && cin >> p && (g != 0 && p != 0))
    {

        for (int i = 0; i < g; i++)
        {
            vet[i].push_back(-1);

            for (int j = 1; j <= p; j++)
            {
                cin >> posicao;
                vet[i].push_back(posicao);
            }
        }

        cin >> quant;
        int q;
        int maior = 0;

        for (int i = 0; i < quant; i++)
        {
            cin >> q;
            int maior = 0;
            aux.push_back(-1);

            for (int j = 1; j <= q; j++)
            {
                cin >> valor;
                aux.push_back(valor);

                if (valor > maior)
                {
                    maior = valor;
                }
            }

            int cont = 0;

            for (int j = 1; j < aux.size(); j++)
            {
                if (aux[j] == maior)
                {
                    if (cont != 0)
                    {
                        cout << " ";
                    }

                    cout << vet[i][j];
                    cont++;
                }
            }

            cout << endl;
            aux.clear();
        }
    }

    return 0;
}