#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, valor;
    int raiz;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int controle = 0;
        cin >> valor;

        if (valor == 0 || valor == 1)
        {
            printf("Not Prime\n");
            continue;
        }

        if (valor == 3)
        {
            printf("Prime\n");
            continue;
        }

        raiz = sqrt(valor);
        raiz = (int)raiz;

        if (valor % raiz == 0 || valor % 2 == 0)
        {
            controle = 1;
        }
        else
        {
            for (int i = 3; i <= raiz; i = i + 2)
            {
                if (valor % i == 0)
                {
                    controle = 1;
                    break;
                }
            }
        }

        if (controle == 1 && valor != 2)
        {
            printf("Not Prime\n");
        }
        else
        {
            printf("Prime\n");
        }
    }

    return 0;
}