#include <bits/stdc++.h>
using namespace std;

int main()
{
    char dig1[1005];
    char dig2[1005];

    stack<char> vet1;
    stack<char> vet2;

    char caractere;
    int n;
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++)
    {
        int controle = 1;

        while (scanf("%c", &caractere) == 1 && caractere != ' ')
        {
            vet1.push(caractere);
        }

        while (scanf("%c", &caractere) == 1 && caractere != '\n')
        {
            vet2.push(caractere);
        }

        if (vet1.size() < vet2.size())
        {
            controle = 0;
        }

        if (controle == 1)
        {
            while (1)
            {
                if (vet2.size() == 0)
                {
                    break;
                }
                if (vet1.top() == vet2.top())
                {
                    vet1.pop();
                    vet2.pop();
                }
                else
                {
                    controle = 0;
                    break;
                }
            }
        }

        if (controle == 0)
        {
            printf("nao encaixa\n");
        }
        else
        {
            printf("encaixa\n");
        }

        while (vet1.size())
        {
            vet1.pop();
        }

        while (vet2.size())
        {
            vet2.pop();
        }
    }

    return 0;
}