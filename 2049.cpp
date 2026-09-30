#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    string b;
    int teste = 1;

    while (getline(cin, a))
    {
        if (a == "0")
        {
            break;
        }

        getline(cin, b);

        if (teste > 1)
        {
            cout << endl;
        }

        cout << "Instancia " << teste << endl;
        teste++;

        if (b.find(a) != string::npos)
        {
            cout << "verdadeira" << endl;
        }
        else
        {
            cout << "falsa" << endl;
        }
    }

    return 0;
}