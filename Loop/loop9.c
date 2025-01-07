#include<stdio.h>
int main ()
{
int n,a=0;
printf("Enter a number:\n");
scanf("%d",&n);
for(; n>0;  n=n%10)
{a=a+n;
}
printf("%d",a);
return 0;
}
