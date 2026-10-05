#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int valor;
    int cont;
    char c;

    vector<int> vet;
    vector<int> compara;

    while (cin >> n)
    {
        cont = 0;
        cin.ignore();

        for (int i = 0; i < n; i++)
        {
            while (cin.get(c) && c != '\n')
            {
                valor = c - '0';
                vet.push_back(valor);
            }

            sort(vet.begin(), vet.end());

            if (i > 0)
            {
                for (int j = 0; j < compara.size(); j++)
                {
                    if (j > vet.size())
                    {
                        break;
                    }

                    if (vet[j] == compara[j])
                    {
                        cont++;
                    }
                    else
                    {
                        break;
                    }
                }

                compara.clear();
            }

            for (int j = 0; j < vet.size(); j++)
            {
                compara.push_back(vet[j]);
            }

            sort(compara.begin(), compara.end());

            vet.clear();
        }

        cout << cont << endl;
        compara.clear();
        vet.clear();
    }

    return 0;
}