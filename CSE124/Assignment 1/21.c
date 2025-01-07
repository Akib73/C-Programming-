#include <stdio.h>
int main ()
{
int a,b,c;
printf("Input three digits number:\n");
scanf("%d",&a);
b=a/100;
c=a%10;
printf("Square of first number:%d\n",b*b);
printf("Square of last number:%d",c*c);
return 0;
}
