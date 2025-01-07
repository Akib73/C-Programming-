#include <stdio.h>
int main ()
{
    int i,j;
    char c;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
         c=64+j;
            printf("%c ",c);
        }
        printf("\n");
    }
    return 0;
}
