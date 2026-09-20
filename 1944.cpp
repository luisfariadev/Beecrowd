#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char valor;

    stack<char> pilha;
    vector<char> pilhaaux;
    int z = 1;
    int cont = 0;

    pilha.push('F');
    pilha.push('A');
    pilha.push('C');
    pilha.push('E');

    for (int i = 0; i < n; i++)
    {
        int controle = 1;

        for (int j = 0; j < 4; j++)
        {
            cin >> valor;

            if (valor == pilha.top() && z == 1)
            {
                pilhaaux.push_back(valor);
                pilha.pop();
            }
            else if (valor == pilha.top())
            {
                controle = 0;
            }
        }

        if (controle == 1)
        {
            z = 0;
            cont++;
        }
        else
        {
            int v = pilhaaux.size();
            v--;

            for (int j = v; j >= 0; j--)
            {
                pilha.push(pilhaaux[j]);
            }
        }
    }

    cout << cont << endl;

    return 0;
}