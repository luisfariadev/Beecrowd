#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, aluno, nota;
    vector<int> vet;
    vector<int> vet2;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> aluno;

        for (int j = 0; j < aluno; j++)
        {
            cin >> nota;
            vet.push_back(nota);
            vet2.push_back(nota);
        }

        sort(vet.rbegin(), vet.rend());
        int cont = 0;

        for (int j = 0; j < aluno; j++)
        {
            if (vet[j] == vet2[j])
            {
                cont++;
            }
        }

        cout << cont << endl;
        vet.clear();
        vet2.clear();
    }

    return 0;
}