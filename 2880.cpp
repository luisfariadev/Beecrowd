#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    string b;
    cin >> a;
    cin >> b;

    int quanta = a.size();
    int quantb = b.size();
    int cont = 0;

    for (int i = 0; i < quanta; i++)
    {
        int controle = 1;

        if (i + quantb > quanta)
        {
            break;
        }

        for (int j = 0; j < quantb; j++)
        {
            if (a[i + j] == b[j])
            {
                controle = 0;
                break;
            }
        }

        if (controle == 1)
        {
            cont++;
        }
    }

    cout << cont << endl;

    return 0;
}