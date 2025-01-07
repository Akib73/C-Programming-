#include <stdio.h>
int main ()
{
    int i,j,c=0;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
         if(j&1) {
         c=c+1;
         printf("%d ",c);
         }
         else {
         c=c+1;
         printf("%d ",c);}

        }
        printf("\n");
    }
    return 0;
}
