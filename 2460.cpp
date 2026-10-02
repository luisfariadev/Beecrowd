#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, valor;
    cin >> n;
    vector<int> vet;

    for (int i = 0; i < n; i++)
    {
        cin >> valor;
        vet.push_back(valor);
    }

    int p;
    int pos;
    cin >> p;

    for (int i = 0; i < p; i++)
    {
        cin >> valor;
        auto it = find(vet.begin(), vet.end(), valor);
        vet.erase(it);
    }

    for (int i = 0; i < vet.size(); i++)
    {
        cout << vet[i];

        if (i != vet.size() - 1)
        {
            cout << " ";
        }
        else
        {
            cout << endl;
        }
    }

    return 0;
}