#include <bits/stdc++.h>
using namespace std;

int main()
{
    int z;
    cin >> z;

    int valor;
    char barra;
    char intermediario;

    int n1;
    int d1;
    int n2;
    int d2;

    int numerador;
    int denominador;

    int MDC;

    for (int i = 0; i < z; i++)
    {
        queue<int> fila;
        MDC = 1;

        cin >> valor;
        fila.push(valor);

        cin >> barra;

        cin >> valor;
        fila.push(valor);

        cin >> intermediario;

        cin >> valor;
        fila.push(valor);

        cin >> barra;

        cin >> valor;
        fila.push(valor);

        // Cálculos

        n1 = fila.front();
        fila.pop();
        d1 = fila.front();
        fila.pop();
        n2 = fila.front();
        fila.pop();
        d2 = fila.front();

        if (intermediario == '+')
        {
            numerador = (n1 * d2) + (n2 * d1);
            denominador = (d1 * d2);
        }
        else if (intermediario == '-')
        {
            numerador = (n1 * d2) - (n2 * d1);
            denominador = (d1 * d2);
        }
        else if (intermediario == '*')
        {
            numerador = (n1 * n2);
            denominador = (d1 * d2);
        }
        else if (intermediario == '/')
        {
            numerador = (n1 * d2);
            denominador = (n2 * d1);
        }

        cout << numerador << "/" << denominador << " " << "=" << " ";

        int p = 2;
        int n = numerador;
        int d = denominador;

        if (numerador < 0 && denominador > 0)
        {
            numerador = numerador * -1;
        }
        else if (denominador < 0 && numerador > 0)
        {
            denominador = denominador * -1;
            d = d * -1;
            n = n * -1;
        }
        else if (numerador < 0 && denominador < 0)
        {
            numerador = numerador * -1;
            denominador = denominador * -1;
            d = d * -1;
            n = n * -1;
        }

        while (1)
        {
            if (numerador == 1 && denominador == 1)
            {
                break;
            }

            if (numerador % p == 0 && denominador % p == 0)
            {
                MDC = MDC * p;
                numerador = numerador / p;
                denominador = denominador / p;
            }
            else if (numerador % p == 0)
            {
                numerador = numerador / p;
            }
            else if (denominador % p == 0)
            {
                denominador = denominador / p;
            }
            else
            {
                p++;
            }
        }

        n = n / MDC;
        d = d / MDC;

        cout << n << "/" << d << endl;
    }

    return 0;
}