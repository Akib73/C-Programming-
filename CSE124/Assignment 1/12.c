#include <stdio.h>
int main ()
{
int a,b;
printf("Input tow Number:\n");
scanf("%d%d",&a,&b);
printf("Quotient= %d / %d= %d\n",a,b,a/b);
printf("Remainder= %d  %% %d= %d",a,b,a%b);
return 0;
}
