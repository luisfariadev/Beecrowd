#include <bits/stdc++.h>
using namespace std;

int main()
{
    char caractere;
    stack<char> pilha1;
    stack<char> pilha2;
    int soma = 0;

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int z = 0;
        int controle = 1;

        for (int j = 0; j < 4; j++)
        {
            cin >> caractere;

            if (i % 2 != 0)
            {
                if (i > 1)
                {
                    if (pilha2.top() != caractere)
                    {
                        controle = 0;
                    }

                    pilha2.pop();
                }

                pilha1.push(caractere);
            }
            else
            {
                if (pilha1.top() != caractere)
                {
                    controle = 0;
                }

                pilha1.pop();
                pilha2.push(caractere);
            }

            printf("%d\n", soma);
        }

        if (controle == 1)
        {
            soma++;
        }
    }

    cout << soma << endl;

    return 0;
}