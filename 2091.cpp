#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    while (cin >> n && n != 0)
    {
        vector<long long> vetor(n);

        for (long long i = 0; i < n; i++)
        {
            cin >> vetor[i];
        }

        sort(vetor.begin(), vetor.end());

        long long cont = 0;
        long long controle = 1;

        for (long long i = 0; i < n; i++)
        {
            if (i == 0)
            {
                cont = 1;
            }
            else
            {
                if (vetor[i] == vetor[i - 1])
                {
                    cont++;
                }
                else
                {
                    if (cont % 2 != 0)
                    {
                        controle = 0;
                        cout << vetor[i - 1] << endl;
                        break;
                    }
                    else
                    {
                        cont = 1;
                    }
                }
            }
        }

        if (cont % 2 != 0 && controle == 1)
        {
            cout << vetor[n - 1] << endl;
        }
    }

    return 0;
}