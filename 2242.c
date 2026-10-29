#include <stdio.h>
#include <string.h>
 
int main()
{
    char palavra[55];
    char cond[55];
    
    scanf("%s", palavra);
    int tam = strlen(palavra);
    int cont = 0;
    
    for(int i = 0; i < tam; i++)
    {
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
        {
            cond[cont] = palavra[i];
            cont++;
        }
    }
    
    int z = cont - 1;
    
    for(int i = 0; i < cont; i++)
    {
        if(cond[i] != cond[z])
        {
            printf("N\n");
            return 0;
        }
        
        z--;
    }
    
    printf("S\n");
    
 
    return 0;
}