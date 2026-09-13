#include <bits/stdc++.h>
using namespace std;

int main()
{
    int bernadete = 0;
    int adalberto = 0;
    int n;
    int valor;
    vector<int> vet1;
    vector<int> vet2;

    vector<int> vetref = {4, 5, 6, 7, 12, 11, 13, 1, 2, 3};
    int *p2;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int analise = 0;
        vet1.clear();
        vet2.clear();

        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &valor);
            vet1.push_back(valor);
        }

        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &valor);
            vet2.push_back(valor);
        }

        for (int j = 0; j < 3; j++)
        {
            auto p1 = find(vetref.begin(), vetref.end(), vet1[j]);
            auto p2 = find(vetref.begin(), vetref.end(), vet2[j]);

            if (p1 >= p2)
            {
                analise++;
            }
            else
            {
                analise--;
            }
        }

        if (analise < 0)
        {
            bernadete++;
        }
        else
        {
            adalberto++;
        }
    }

    printf("%d %d\n", adalberto, bernadete);

    return 0;
}