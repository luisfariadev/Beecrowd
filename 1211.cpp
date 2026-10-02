#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vet;
    vector<int> compara;

    int n;
    int valor;
    char c;

    while (cin >> n)
    {
        cin.ignore();
        int cont = 0;
        int tam = 0;

        while (cin.get(c) && c != '\n')
        {
            valor = c - '0';
            vet.push_back(valor);
            tam++;
        }

        n--;

        for (int i = 0; i < n * (tam + 1); i++)
        {
            cin.get(c);

            if (c == '\n')
            {
                continue;
            }
            else
            {
                valor = c - '0';
                vet.push_back(valor);
            }
        }

        n++;

        for (int i = 0; i < tam; i++)
        {
            int p = 1;

            while (1)
            {
                if (vet[i] == vet[p * (i + tam)])
                {
                    cont++;
                    break;
                }

                p++;

                if (p >= n)
                {
                    break;
                }
            }
        }

        cout << cont << endl;

        vet.clear();
    }

    return 0;
}
