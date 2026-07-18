#include <stdio.h>
 
int main() 
{
    int n;
    int p;
    
    for(int i = 1; i <= 4; i++)
    {
        scanf("%d", &n);
        
        if(n == 1)
        {
            p = i;
        }
    }
    
    printf("%d\n", p);
    
 
    return 0;
}