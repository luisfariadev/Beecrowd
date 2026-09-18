#include <bits/stdc++.h>
using namespace std;

void printa(int j)
{
    if (j == 0)
    {
        cout << "A" << endl;
    }
    else if (j == 1)
    {
        cout << "B" << endl;
    }
    else if (j == 2)
    {
        cout << "C" << endl;
    }
    else if (j == 3)
    {
        cout << "D" << endl;
    }
    else
    {
        cout << "E" << endl;
    }
}

int main()
{
    int a;
    int p;
    int valor;

    while (cin >> a && a != 0)
    {
        for (int i = 0; i < a; i++)
        {
            int menor = 127;
            int cont = 0;

            for (int j = 0; j < 5; j++)
            {
                cin >> valor;

                if (valor <= 127)
                {
                    cont++;
                }

                if (valor <= menor)
                {
                    menor = valor;
                    p = j;
                }
            }

            if (cont != 1)
            {
                cout << '*' << endl;
            }
            else
            {
                printa(p);
            }
        }
    }

    return 0;
}