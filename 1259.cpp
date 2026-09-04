#include <bits/stdc++.h>
using namespace std;

int main()
{
    int quant;
    int valor;
    vector<int> par;
    vector<int> impar;

    scanf("%d", &quant);

    for (int i = 0; i < quant; i++)
    {
        scanf("%d", &valor);

        if (valor % 2 == 0)
        {
            par.push_back(valor);
        }
        else
        {
            impar.push_back(valor);
        }
    }

    sort(par.begin(), par.end());
    sort(impar.rbegin(), impar.rend());

    for (int j = 0; j < par.size(); j++)
    {
        printf("%d\n", par[j]);
    }

    for (int j = 0; j < impar.size(); j++)
    {
        printf("%d\n", impar[j]);
    }

    return 0;
}