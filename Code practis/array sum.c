#include <stdio.h>
int main ()
{
    int a[10],i,sum=0;
    for(i=0; i<10; i++)
    {
        printf("Enter %d number:\n",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0; i<10; i++){
    sum=sum+a[i];
    }
    printf("Sum of 10 number is=%d",sum);
    return 0;
    }
