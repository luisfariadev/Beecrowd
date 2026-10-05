#include <bits/stdc++.h>
#define max 95
using namespace std;

int main()
{
    int n, b, valor;
    vector<int> vet;
    int posicao[max];

    while (cin >> n && cin >> b && (n != 0 && b != 0))
    {
        for(int i = 0; i < max; i++)
        {
            posicao[i] = 0;
        }
        
        
        for (int i = 0; i < b; i++)
        {
            cin >> valor;
            vet.push_back(valor);
        }

        sort(vet.rbegin(), vet.rend());

        for(int i = 0; i < b; i++)
        {
            for(int j = 0; j < b; j++)
            {
                posicao[vet[j]] = 1;
                
                if(j > i)
                {
                    posicao[vet[j] - vet[i]] = 1;
                }
                else if(i > j)
                {
                    posicao[vet[i] - vet[j]] = 1;
                }
            }
        }
        
        int controle = 1;
        
        for(int i = 0; i <= n; i++)
        {
            if(posicao[i] == 0)
            {
                controle = 0;
                break;
            }
        }
        
        if(controle == 1)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
        vet.clear();
    }

    return 0;
}