#include<stdio.h>
#include<cs50.h>

int main (void)
{

int n,m;

do
{
    n = get_int("Grandezza desiderata: ");
}
while (n < 1 || n > 8);
m = n;
for (int i = 0; i < n; i++)
{
    for (int j = m; j > 1; j--)
    {
        printf(" ");
    }
    for (int y = m-1; y < n; y++)
    {
        printf("#");
    }
    for (int z = 0; z < 5; z++)
    {
        printf(" ");
    }
    for (int y = m-1; y < n; y++)
    {
        printf("#");
    }
    printf("\n");
    m--;
}

}
