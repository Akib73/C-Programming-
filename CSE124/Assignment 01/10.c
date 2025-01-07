#include <stdio.h>
int main ()
{
int a,b,c;
printf("Input the value of a :\n");
scanf("%d",&a);
printf("Enter the value of b:\n");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("After interchange:\na=%d,b=%d",a,b);
return 0;
}
