#include <bits/stdc++.h>
using namespace std;

int main()
{
    string lista;
    vector<string> principal;
    int n;

    while (cin >> n)
    {
        cin.ignore();
        int cont = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> lista;
            principal.push_back(lista);
        }

        sort(principal.begin(), principal.end());

        int tam = principal[0].size();

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < tam; j++)
            {
                if (principal[i][j] == principal[i + 1][j])
                {
                    cont++;
                }
                else
                {
                    break;
                }
            }
        }

        cout << cont << endl;
        principal.clear();
    }

    return 0;
}