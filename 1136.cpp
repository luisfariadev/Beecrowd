#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vet;
    set<int> aux;
    int n, b;
    int valor;

    while (cin >> n && cin >> b && (n != 0 || b != 0))
    {
        for (int i = 0; i < b; i++)
        {
            cin >> valor;
            vet.push_back(valor);
        }

        int controle = 0;
        int valor;

        for (int i = 0; i < b; i++)
        {
            for (int j = 0; j < b; j++)
            {
                valor = fabs(vet[i] - vet[j]);

                if (valor <= n)
                {
                    aux.insert(valor);
                }

                if (aux.size() == n + 1)
                {
                    controle = 1;
                    break;
                }
            }

            if (controle == 1)
            {
                break;
            }
        }

        if (controle == 1)
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }

        vet.clear();
        aux.clear();
    }

    return 0;
}