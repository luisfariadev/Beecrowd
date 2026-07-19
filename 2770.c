#include <stdio.h>
 
int main() 
{
    int x;
    int y;
    int m;
    
    while(scanf("%d %d %d", &x, &y, &m) != EOF)
    {
        int area = x * y;
        
        for(int i = 0; i < m; i++)
        {
            int j;
            int p;
            scanf("%d %d", &j, &p);
            
            if((x >= j && y >= p) || (x >= p && y >=j))
            {
                printf("Sim\n");
            }
            else
            {
                printf("Nao\n");
            }
        }
    }
 
    
 
    return 0;
}