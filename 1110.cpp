#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> fila;
    vector<int> vet;
    int n;

    while (cin >> n && n != 0)
    {
        if (n == 1)
        {
            cout << "Remaining card: 1" << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            fila.push(i + 1);
        }

        while (1)
        {
            vet.push_back(fila.front());
            fila.pop();

            if (fila.size() == 1)
            {
                break;
            }

            fila.push(fila.front());
            fila.pop();
        }

        cout << "Discarded cards:";

        for (int i = 0; i < n - 1; i++)
        {
            if (i == n - 2)
            {
                cout << " " << vet[i] << endl;
            }
            else
            {
                cout << " " << vet[i] << ",";
            }
        }

        cout << "Remaining card:" << " " << fila.front() << endl;

        vet.clear();
        fila.pop();
    }

    return 0;
}