#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, valor;
    cin >> n;
    vector<int> vet;
    vet.push_back(0);

    for (int i = 1; i <= n; i++)
    {
        cin >> valor;
        vet.push_back(valor);
    }

    sort(vet.rbegin(), vet.rend());

    for (int i = 0; i < n; i++)
    {
        vet[i] = vet[i] + i + 1;
    }

    sort(vet.rbegin(), vet.rend());
    vet[0] = vet[0] + 1;

    cout << vet[0] << endl;

    return 0;
}