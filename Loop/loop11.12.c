#include <stdio.h>
int main ()
{
    int i,j,c=0,d=1;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        { c=c+j;
        if(j&1)
          printf("1");
          else
            printf("0");
          }
          printf("\n");

        }

    return 0;
}

