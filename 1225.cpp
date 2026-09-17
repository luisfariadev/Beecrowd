#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c;
    int numero;

    while (cin >> c)
    {
        vector<int> vet;
        int soma = 0;
        int cont = 0;
        int media;
        float media2;

        for (int i = 0; i < c; i++)
        {
            cin >> numero;
            soma = soma + numero;
            vet.push_back(numero);
        }

        media2 = soma * 1.0 / c;
        media = soma / c;

        if (media2 != media)
        {
            cout << "-1" << endl;
            continue;
        }

        for (int i = 0; i < c; i++)
        {
            if (vet[i] < media)
            {
                cont = cont + media - vet[i];
            }
            else
            {
                cont = cont + vet[i] - media;
            }
        }

        cont = cont / 2;

        printf("%d\n", cont + 1);
    }

    return 0;
}