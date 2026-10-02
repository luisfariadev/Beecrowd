#include <bits/stdc++.h>
using namespace std;

void caso1(char *numero)
{
    stack<char> pilha;

    int decimal = 0;
    int p = 0;
    int tam = strlen(numero);
    tam--;

    for (int i = tam; i >= 0; i--)
    {
        if (numero[i] == '1')
        {
            decimal = decimal + pow(2, p);
        }

        p++;
    }

    printf("%d dec\n", decimal);
    int resto;

    while (decimal != 0)
    {
        resto = decimal % 16;

        if (resto == 10)
        {
            pilha.push('a');
        }
        else if (resto == 11)
        {
            pilha.push('b');
        }
        else if (resto == 12)
        {
            pilha.push('c');
        }
        else if (resto == 13)
        {
            pilha.push('d');
        }
        else if (resto == 14)
        {
            pilha.push('e');
        }
        else if (resto == 15)
        {
            pilha.push('f');
        }
        else
        {
            pilha.push(resto + '0');
        }

        decimal = decimal / 16;
    }

    while (pilha.size())
    {
        printf("%c", pilha.top());
        pilha.pop();
    }

    printf(" hex\n");
}

void caso2(char *numero)
{
    stack<char> pilha;
    stack<int> pilha2;

    int tam = strlen(numero);
    tam--;
    int c = 1;

    int decimal = 0;

    for (int i = tam; i >= 0; i--)
    {
        decimal = decimal + (numero[i] - '0') * c;
        c = 10 * c;
    }

    int decimal2 = decimal;
    int resto;

    while (decimal2 != 0)
    {
        resto = decimal2 % 16;

        if (resto == 10)
        {
            pilha.push('a');
        }
        else if (resto == 11)
        {
            pilha.push('b');
        }
        else if (resto == 12)
        {
            pilha.push('c');
        }
        else if (resto == 13)
        {
            pilha.push('d');
        }
        else if (resto == 14)
        {
            pilha.push('e');
        }
        else if (resto == 15)
        {
            pilha.push('f');
        }
        else
        {
            pilha.push(resto + '0');
        }

        decimal2 = decimal2 / 16;
    }

    while (pilha.size())
    {
        printf("%c", pilha.top());
        pilha.pop();
    }

    printf(" hex\n");

    while (decimal != 0)
    {
        pilha2.push(decimal % 2);
        decimal = decimal / 2;
    }

    while (pilha2.size())
    {
        printf("%d", pilha2.top());
        pilha2.pop();
    }

    printf(" bin\n");
}

void caso3(char *numero)
{
    int tam = strlen(numero);
    tam--;
    int p = 0;
    int decimal = 0;

    for (int i = tam; i >= 0; i--)
    {
        if (numero[i] == 'a')
        {
            decimal = decimal + (10 * pow(16, p));
        }
        else if (numero[i] == 'b')
        {
            decimal = decimal + (11 * pow(16, p));
        }
        else if (numero[i] == 'c')
        {
            decimal = decimal + (12 * pow(16, p));
        }
        else if (numero[i] == 'd')
        {
            decimal = decimal + (13 * pow(16, p));
        }
        else if (numero[i] == 'e')
        {
            decimal = decimal + (14 * pow(16, p));
        }
        else if (numero[i] == 'f')
        {
            decimal = decimal + (15 * pow(16, p));
        }
        else
        {
            decimal = decimal + ((numero[i] - '0') * pow(16, p));
        }

        p++;
    }

    printf("%d dec\n", decimal);

    stack<int> pilha;

    while (decimal != 0)
    {
        pilha.push(decimal % 2);
        decimal = decimal / 2;
    }

    while (pilha.size())
    {
        printf("%d", pilha.top());
        pilha.pop();
    }

    printf(" bin\n");
}

int main()
{
    int n;
    int valor;
    char codigo[10];
    char numero[40];

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%s", numero);
        scanf("%s", codigo);

        printf("Case %d:\n", i);

        if (strcmp(codigo, "bin") == 0)
        {
            caso1(numero);
        }
        else if (strcmp(codigo, "dec") == 0)
        {
            caso2(numero);
        }
        else
        {
            caso3(numero);
        }

        cout << endl;
    }

    return 0;
}
