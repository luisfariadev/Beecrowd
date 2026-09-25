#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while (cin >> n)
    {
        priority_queue<int> pq;
        stack<int> pilha;
        queue<int> fila;

        int controlepilha = 1;
        int controlefila = 1;
        int controlepq = 1;

        int caso;
        int numero;

        for (int i = 0; i < n; i++)
        {
            cin >> caso;
            cin >> numero;

            if (caso == 1)
            {
                pilha.push(numero);
                fila.push(numero);
                pq.push(numero);
            }
            else
            {
                if (numero != pilha.top())
                {
                    controlepilha = 0;
                }
                else
                {
                    pilha.pop();
                }

                if (numero != fila.front())
                {
                    controlefila = 0;
                }
                else
                {
                    fila.pop();
                }

                if (numero != pq.top())
                {
                    controlepq = 0;
                }
                else
                {
                    pq.pop();
                }
            }
        }

        if (controlepq == 0 && controlefila == 0 && controlepilha == 0)
        {
            cout << "impossible" << endl;
        }
        else if (controlepq + controlefila + controlepilha > 1)
        {
            cout << "not sure" << endl;
        }
        else if (controlepq == 1)
        {
            cout << "priority queue" << endl;
        }
        else if (controlefila == 1)
        {
            cout << "queue" << endl;
        }
        else if (controlepilha == 1)
        {
            cout << "stack" << endl;
        }
    }

    return 0;
}
