#include <stdio.h>
int main ()
{
int n,a,sum=0;
scanf("%d",&n);
for(;n>0; n=n/10 )
{
    a=n%10;
    sum=sum+a;
}
    printf("%d",sum);
}
