#include <stdio.h>
int main ()
{
int a,b,c;
printf("Input three digits number:\n");
scanf("%d",&a);
b=a/100;
c=a%10;
printf("Sum of first and last numbers=%d",b+c);
return 0;
}
