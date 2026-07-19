#include <stdio.h>
 
int main() 
{
    int d;
    int g;
    scanf("%d", &d);
    
    if(d <= 800)
    {
        g = 1;
    }
    else if(d > 800 && d <= 1400)
    {
        g = 2;
    }
    else
    {
        g = 3;
    }
    
    printf("%d\n", g);
    
 
    
 
    return 0;
}