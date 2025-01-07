#include <stdio.h>
int main ()
{
int n;
scanf("%d",&n);
int a,b,c;
a=n%10;
b=n/100;
c=a+b;
printf("%d",c);
return 0;
}
