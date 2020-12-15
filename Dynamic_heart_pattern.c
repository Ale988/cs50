#include<stdio.h>
#include<cs50.h>

int main(void) 
{
    int n,i,j,k,l,m,p,s,t,u,z,w;

    do 
   {
       n = get_int("grandezza cuore: ");
   } 

    while (n < 1);
    k = n; 
    m = n;
    p = n;
    s = ((((n-1)*2)+n)*2)+1;
    t = s;
    u = s;
    z = (p*2)-1;
    w = z;
    for(i = 0; i < n; i++)
    {
        for(l = -1; l < m-2; l++)
        {
            printf(" ");
        }
        for(j = 0; j < k; j++)
        {
            printf("#");
        }
        for(int o = 0; o < w; o++)
        {
            printf(" "); 
        }
        for(j = 0; j < k; j++)
        {
            printf("#");
        }        
        k += 2;
        m -= 1;
        w -=2;
        printf("\n");
    }

    for (j = 0; j < (((n-1)*2)+n)+1; j++)
    {
        for(int g = u; g > s; g--)
        {
            printf(" "); 
        }
        for(i = 1; i <= t; i++)
        {
            printf("#");
        }
        printf("\n");
        s--;
        t -= 2;
    }
}
