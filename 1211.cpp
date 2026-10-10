#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<string> principal;
    vector<string> aux;

    while (cin >> n)
    {
        cin.ignore();
        int cont = 0;
        principal.clear();
        aux.clear();

        for (int i = 0; i < n; i++)
        {
            cin >> principal;
            int tam = principal.size();

            if (i != 0)
            {
                for (int j = 0; j < tam; j++)
                {
                    if (aux[j] == principal[j])
                    {
                        cont++;
                    }
                    else
                    {
                        break;
                    }
                }
            }

            aux.clear();

            if (i != n - 1)
            {
                sort(principal.begin(), principal.end());

                for (int j = 0; j < tam; j++)
                {
                    aux.push_back(principal[j]);
                }

                principal.clear();
            }
            else
            {
                cout << cont << endl;
            }
        }
    }

    return 0;
}