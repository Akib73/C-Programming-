#include <stdio.h>
int main ()
{
    int i,a,sum=0;
    for(i=1; i<=3; i++)
    {
        printf("Enter %d number:\n", i);
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("Sum of three number is =%d",sum);
    return 0;
}
