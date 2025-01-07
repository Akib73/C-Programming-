#include <stdio.h>
int main ()
{
int a,b,c,d;
printf("Enter tow number:\n");
scanf("%d%d",&a,&b);
c=a/b;
d=a-(a/b)*b;
printf("Quotient of two numbers= %d\n",c);
printf("Remainder of two numbers= %d",d);
return 0;
}
