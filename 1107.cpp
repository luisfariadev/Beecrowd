#include <bits/stdc++.h>
using namespace std;

int main()
{
    int altura;
    int comprimento;
    vector<int> valor;
    vector<int> compara;

    while ((cin >> altura && cin >> comprimento) && (altura != 0 || comprimento != 0))
    {
        int dado;
        int cont = 0;

        for (int i = 0; i < comprimento; i++)
        {
            cin >> dado;

            if (i == 0)
            {
                cont = dado;
            }
            else
            {
                if (dado)
            }
        }

        int p;

        for (int i = 0; i < comprimento; i++)
        {
            if (i > altura)
            {
                break;
            }

            int quant = 0;

            for (int j = 0; j < comprimento; j++)
            {
                if (i == valor[j])
                {
                    if (cont == 0)
                    {
                        cont = altura - i;
                    }
                    else
                    {
                        if (j > 0)
                        {
                            if (valor[j] != valor[j - 1])
                            {
                                quant++;
                            }
                        }
                    }
                }
            }

            if (quant > 1)
            {
                cont = cont + quant;
            }
        }

        cout << cont << endl;

        valor.clear();
        compara.clear();
    }

    return 0;
}
