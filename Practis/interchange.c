#include <stdio.h>
int main ()
{
int a,b;
printf("Input the value of a :\n");
scanf("%d",&a);
printf("Enter the value of b:\n");
scanf("%d",&b);
a=b;
b=a;
printf("After interchange:\na=%d,b=%d",a,b);
return 0;
}
