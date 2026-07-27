#include <stdio.h>
 
int main() 
{
    int quant;
    float nota;
    float menor;
    
    while(scanf("%d", &quant) != EOF)
    {
        for(int i = 0; i < quant; i++)
        {
            scanf("%f", &nota);
            
            if(i == 0)
            {
                menor = nota;
            }
            
            if(nota < menor)
            {
                menor = nota;
            }
        }
        
        printf("%.2f\n", menor);
    }
 
    return 0;
}