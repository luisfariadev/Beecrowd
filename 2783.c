for (int i = 0; i < c; i++)
{
    scanf("%d", &vetor[i]);
}

for (int i = 0; i < m; i++)
{
    scanf("%d", &vetor2[i]);
}

for (int i = 0; i < c; i++)
{
    int valor = 0;
    for (int j = 0; j < m; j++)
    {
        if (vetor[i] == vetor2[j] && valor != vetor2[j])
        {
            cont++;
            valor = vetor2[j];
        }
    }
}

printf("%d\n", c - cont);

return 0;
}