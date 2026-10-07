#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string um, dois;

    for (int i = 0; i < n; i++)
    {
        cin >> um >> dois;

        if (um == dois)
        {
            cout << "empate" << endl;
        }
        else if (um == "tesoura" && dois == "papel")
        {
            cout << "rajesh" << endl;
        }
        else if (um == "papel" && dois == "pedra")
        {
            cout << "rajesh" << endl;
        }
        else if (um == "pedra" && dois == "lagarto")
        {
            cout << "rajesh" << endl;
        }
        else if (um == "lagarto" && dois == "spock")
        {
            cout << "rajesh" << endl;
        }
        else if (um == "spock" && dois == "tesoura")
        {
            cout << "rajesh" << endl;
        }
        else if (um == "tesoura" && dois == "lagarto")
        {
            cout << "rajesh" << endl;
        }
        else if (um == "lagarto" && dois == "papel")
        {
            cout << "rajesh" << endl;
        }
        else if (um == "papel" && dois == "spock")
        {
            cout << "rajesh" << endl;
        }
        else if (um == "spock" && dois == "pedra")
        {
            cout << "rajesh" << endl;
        }
        else if (um == "pedra" && dois == "tesoura")
        {
            cout << "rajesh" << endl;
        }
        else
        {
            cout << "sheldon" << endl;
        }
    }

    return 0;
}