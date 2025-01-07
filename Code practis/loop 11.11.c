#include <stdio.h>
int main ()
{
    int i,j,k;
    for(i=1; i<=5; i++)
    {
        for(j=i; j<=i; j++)
        {
            printf("%d",j);
            for(k=j; k<=j; k++){
                printf("%d",i+j)
            }
        }
        printf("\n");
    }
    return 0;
}
