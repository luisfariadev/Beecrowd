#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, y1;
    int x2, y2;

    int a, b;
    int teste = 0;

    int n;

    while (cin >> x1 >> y1 >> x2 >> y2 && (x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0))
    {
        teste++;
        int cont = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;

            if ((a >= x1 && a <= x2) && (b >= y2 && b <= y1))
            {
                cont++;
            }
        }

        cout << "Teste " << teste << endl
             << cont << endl;
    }

    return 0;
}