#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, valor;
    vector<int> vet(10003, 0);

    while (cin >> a >> b && a != 0 && b != 0)
    {
        for (int i = 0; i < a * b; i++)
        {
            cin >> valor;
            vet[valor] = vet[valor] + 1;
        }

        sort(vet.rbegin(), vet.rend());

        for (int i = 1; i < a * b; i++)
        {
            if (vet[i] == 0)
            {
                break;
            }
            else
            {
                if (i != 1)
                {
                    cout << " ";
                }

                if (vet[1] == vet[i])
                {
                    cout << i;
                }
            }
        }

        cout << endl;
        vet.clear();
    }

    return 0;
}