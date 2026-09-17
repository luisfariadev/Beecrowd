#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int valor;
    int soma;
    cin >> n;
    stack<int> altura;
    int pulo;
    char letra;
    stack<char> estado;

    for (int i = 0; i < n; i++)
    {
        cin >> valor;
        soma = 0;

        for (int j = 0; j < valor; j++)
        {
            cin >> pulo;
            altura.push(pulo);
        }

        for (int j = 0; j < valor; j++)
        {
            cin >> letra;
            estado.push(letra);
        }

        while (altura.size())
        {
            if (estado.top() == 'J' && altura.top() > 2)
            {
                soma++;
            }
            else if (estado.top() == 'S' && altura.top() <= 2)
            {
                soma++;
            }

            estado.pop();
            altura.pop();
        }

        cout << soma << endl;
    }

    return 0;
}