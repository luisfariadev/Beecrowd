#include <bits/stdc++.h>
#define max 1005
using namespace std;

int main()
{
    stack<char> analisa;
    char expressao[max];

    while (scanf("%s", expressao) != EOF)
    {
        int controle = 1;
        int quant = strlen(expressao);

        for (int i = 0; i < quant; i++)
        {
            if (expressao[i] == ')')
            {
                if (analisa.size() == 0)
                {
                    controle = 0;
                    break;
                }
                else if (analisa.top() == expressao[i])
                {
                    controle = 0;
                    break;
                }
                else
                {
                    analisa.pop();
                }
            }
            if (expressao[i] == '(')
            {
                analisa.push(expressao[i]);
            }
        }

        if (analisa.size() > 0)
        {
            controle = 0;

            while (analisa.size())
            {
                analisa.pop();
            }
        }

        if (controle == 0)
        {
            printf("incorrect\n");
        }
        else
        {
            printf("correct\n");
        }
    }

    return 0;
}